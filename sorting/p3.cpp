#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> countingSort(const vector<int>& arr) {
    if (arr.empty()) return arr;

    // Find the minimum and maximum elements to handle negative numbers
    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());
    
    // Use long long to prevent integer overflow during subtraction
    long long range = (long long)maxVal - minVal + 1;

    // SAFETY CHECK: If range is too large (e.g., > 10^7), allocate memory defensively
    // Fall back to O(N log N) std::sort to avoid a Memory Limit Exceeded (MLE) crash.
    if (range > 10000000) {
        vector<int> fallbackArr = arr;
        sort(fallbackArr.begin(), fallbackArr.end());
        return fallbackArr;
    }

    vector<int> countArr(range, 0);
    vector<int> outputArr(arr.size());

    // 1. Store the frequency of each element
    for (int num : arr) {
        countArr[num - minVal]++;
    }

    // 2. Change countArr[i] so that it contains the actual position of this element in outputArr
    for (int i = 1; i < range; i++) {
        countArr[i] += countArr[i - 1];
    }

    // 3. Build the output array in reverse order to maintain stability
    for (int i = arr.size() - 1; i >= 0; i--) {
        int currentNum = arr[i];
        int outputIndex = countArr[currentNum - minVal] - 1;
        outputArr[outputIndex] = currentNum;
        countArr[currentNum - minVal]--; 
    }

    return outputArr;
}

int main() {
    // Test Case with normal range and negative numbers
    vector<int> data = {4, -2, 2, 8, 3, 3, 1};
    vector<int> sortedData = countingSort(data);

    cout << "Sorted Array: ";
    for (int num : sortedData) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

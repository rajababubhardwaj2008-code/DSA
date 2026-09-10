#include <iostream>
#include <vector>
using  namespace std;

int findIndex(const vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return static_cast<int>(i); // Target found, return index
        }
    }
    return -1; // Target is not found
}

int main() {
    vector<int> numbers = {24,12,7,85,43,90};
    
    int target1 = 85;
    int target2 = 50;

    //case 1: Target exists
    int index1 = findIndex(numbers, target1);
    cout<<"target"<<target1<<"found at index:"<<index1<<"\n";

    //Case 2: Target does not exist
    int index2 = findIndex(numbers, target2);
    cout<<"target"<<target2<<"results in index:"<<index2<<"\n";

    return 0;
}

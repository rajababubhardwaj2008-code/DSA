#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Core Mechanic: Swaps adjacent elements to bubble up the maximum element
    void bubbleSort(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false; // Flag to track if any swap happens in this pass
            
            // Last i elements are already in place, so we don't need to check them
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    swapped = true; // Mark that a swap occurred
                }
            }
            
            // Optimization: If no elements were swapped, the array is already sorted
            if (!swapped) {
                break;
            }
        }
    }
};

int main() {
    Solution solver;
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};

    // Print array before sorting
    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Execute Bubble Sort
    solver.bubbleSort(nums);

    // Print array after sorting
    cout << "Sorted Array:   ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low++], nums[mid++]);
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high--]);
            }
        }
    }
};

// Add this main function at the bottom
int main() {
    Solution solver;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    
    solver.sortColors(nums);
    
    // Print the sorted output
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}

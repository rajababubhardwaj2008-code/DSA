#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n <= 1) return;

        k = k % n;
        if(k == 0) return;

        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 2;


    Solution solver;
    solver.rotateArray(nums, k);

    for (int num : nums) {
        cout << num << " "; 
    }
    return 0;
}

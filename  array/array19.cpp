#include<iostream>
#include<vector>
#include<array>
using namespace std;

class solution{
    public:
    void moveZeroes(vector<int>& nums){
        int insertPos = 0;
        for( int i = 0; i<nums.size();i++){
        if( nums[i] != 0){
            swap(nums[insertPos], nums[i]);
          
            insertPos++;
        }
        }
    }
};
int main() {
    solution solver;
    vector<int> nums = {1,0,0,3,5};
    solver.moveZeroes(nums);
    for(int num :nums){
        cout << num << " ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:

    void findTwoSum(vector<int> &arr,int target){
        for( int i = 0; i<arr.size(); i++){
            for(int j = i+1; j<arr.size();j++){
                if(arr[i] + arr[j] == target){
                    cout << "target is matched" << arr[i] << "and" << arr[j] << endl;
                    return;
                }
            }
        }
        cout << "No two elements add up to the target." << endl;
    }
};

int main() {
    solution solver;
    vector<int> nums = {10,20,30,40,50};
    int target = 50;
    solver.findTwoSum(nums,target);
    return 0;
    
}
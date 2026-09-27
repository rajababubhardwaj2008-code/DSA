#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:

    bool isSorted(vector<int> &arr){
        if(arr.size() <= 1){
            return true;
        }
        for(int i = 0; i<arr.size()-1; i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }
};

int main() {
    solution solver;

    vector<int> nums1 = {10,20,30,40,50};
     vector<int> nums2 = {10,30,30,20,50};

     cout << (solver.isSorted(nums1)? "sorted" : "not sorted" )<< endl;
      cout << (solver.isSorted(nums2)? "sorted" : "not sorted" )<< endl;

      return 0;
    
}
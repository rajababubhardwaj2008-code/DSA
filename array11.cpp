#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    void searchElements( vector<int> &arr, int x){
        bool found = false;

        for( int i = 0; i< arr.size(); i++){
            if( arr[i] == x){
                found = true;
                break;
            }
        }
        if( found){
            cout << "found" << endl;
        }else{
            cout << "not found" << endl;
        }
    }
};

int main() {
   solution solver;
   vector<int> nums = {8,8,7,6,4};
   int x = 7;
    solver.searchElements(nums, x);
   return 0;
}
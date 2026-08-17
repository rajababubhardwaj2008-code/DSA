#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:

    double findAverage(vector<int> &arr) {
        if(arr.empty()) return 0.0;

        int sum = 0;
        for( int i = 0; i< arr.size(); i++){
            sum +=arr[i];
        }
        return (double)sum / arr.size(); 
    }
};

int main(){
    solution solver;
    vector<int> nums = {10,20,30,40,50};
    cout << solver.findAverage(nums) << endl;
    return 0;
}
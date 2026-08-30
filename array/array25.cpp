#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Subarraysolver{
    public:
    int getlongestSubarraySolver(const vector<int> arr, int k){
        int n = arr.size();
        int len = 0;
        for( int i = 0; i<arr.size(); i++){
            for(int j = i; j<arr.size(); j++){
                int sum = 0;
                for(int idx = i; idx<=j; idx++){
                    sum += arr[idx];
                }
                if( sum == k){
                    len = max(len,j-i+1);
                }
            }
        }
        return len;
    }
};
int main() {
    vector<int> arr = {-1,1,1};
    int k = 1;
    Subarraysolver solver;
    int len = solver.getlongestSubarraySolver(arr,k);
    cout << "the longest len of the subarray is :" << len << endl;
    return 0;
}

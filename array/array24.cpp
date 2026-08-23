#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Brute code...
int longestSubarrayBrute(vector<int> arr, int k){
    int maxlen = 0;
    
   
    for(int i = 0; i < arr.size(); i++){
      
        for(int j = i; j < arr.size(); j++){
            
            
            int sum = 0;
            for(int m = i; m <= j; m++) {
                sum += arr[m];
            }
            
           
            if(sum == k){
                maxlen = max(maxlen, j - i + 1);
            }
        }
    }
    return maxlen; 
}

// Optimal code...
int longestSubarrayOptimal( vector<int> arr , int k){
    int left = 0;
    int sum = 0;
    int maxlen = 0;
    for( int right = 0; right<arr.size() ; right++){
        sum += arr[right];
        while( sum>k && left<=right){
            sum -= arr[left];
            left++;
        }
        if( sum == k){
            maxlen = max(maxlen,right-left+1);

        }
   
    }
         return maxlen;
}

int main() {
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;

    int bruteResult = longestSubarrayBrute(arr, k);
    cout << "Brute Force: Longest subarray length = " << bruteResult << endl;

    int optimalResult = longestSubarrayOptimal(arr, k);
    cout << "Optimal Window: Longest subarray length = " << optimalResult << endl;

    return 0;
}

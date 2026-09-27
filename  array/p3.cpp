//Given a vector of integers, move all negative numbers to the end of the array (order doesn't need to be preserved this time — just get all negatives to the end, positives at the front).
#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main(){
    vector<int> arr = {2,-1,6,7,-8,9};
    vector<int> negatives;

    int nonNegativeElement = 0;
    for( int i = 0; i<arr.size(); i++){
        if( arr[i] >= 0){
            arr[nonNegativeElement] = arr[i];
            nonNegativeElement++;
        }else  
           negatives.push_back(arr[i]);
        }
        int j  = 0;
    for( int i = nonNegativeElement; i<arr.size(); i++){
        arr[i] = negatives[j];
        j++;
    }
      
        for( int i = 0; i<arr.size(); i++){
            cout << arr[i] << " ";
        }
    cout << endl;
    return 0;
}
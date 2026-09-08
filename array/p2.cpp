#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main() {
    vector<int> arr = {0,1,0,3,12};

    
    int nonZeroIndex = 0;
    for( int i = 0; i<arr.size(); i++){
        if( arr[i] != 0){
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }

        }
        for( int i = nonZeroIndex; i<arr.size(); i++){
            arr[i] = 0;
        }
        for( int i = 1; i<arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
           
    }
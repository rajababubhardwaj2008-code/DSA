#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {5,2,8,1,9};

    for( int i = 0; i<arr.size()-1; i++){
        int minIndex = i;
        for( int j = i+1; j<arr.size();j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for( int i = 0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
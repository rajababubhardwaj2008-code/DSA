#include<iostream>
#include<vector>
using namespace std;

int largestelement(vector <int> &arr, int n){
    int largest = arr[0];
    for( int i = 0; i<n ; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    vector<int> arr = {3, 7, 1, 9, 5};
    int n = arr.size();
    
    cout << "The largest element is: " << largestelement(arr, n) << endl;
    
    return 0;
}
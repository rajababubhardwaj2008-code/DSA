#include<iostream>
#include<vector>
using namespace std;

int smallestelement(vector <int> &arr, int n){
    int smallest = arr[0];
    for( int i = 0; i<n ; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
int main() {
    vector<int> arr = {3, 7, 1, 9, 5};
    int n = arr.size();
    
    cout << "The smallest element is: " << smallestelement(arr, n) << endl;
    
    return 0;
}
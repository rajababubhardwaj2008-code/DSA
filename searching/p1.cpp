#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {5, 3, 8, 1, 9};
    int target = 8;
    
    int index = linearSearch(arr, target);
    
    cout << "index: " << index << endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left=0;
    int right=arr.size() - 1;
    
    while (left <= right) {
        int mid = left+(right - left) / 2;// protect from overflow
        
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2,5,8,12,16,23,38,45,56,72};
    int target = 23;
    
    int index = binarySearch(arr, target);
    
    cout << "index:"<< index << endl;
    return 0;
}
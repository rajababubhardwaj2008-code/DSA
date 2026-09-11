#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main() {
    vector<int> arr = {5,3,8,1,9};
    int target = 100;
    for( int i = 0; i<arr.size(); i++){
        if(arr[i] == target ){
           cout << "index value is :" << i << endl;
           return 0;
        }
    }
    cout <<"index not find"<<endl;
    return -1;
}

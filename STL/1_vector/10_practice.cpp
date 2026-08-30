#include<iostream>
#include<vector>
#include<algorithm> //required for reverse vector
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};//sample vector

    reverse(v.begin(),v.end()); //STL operation to reverse the vector

    cout << "The Reverse Elements are:" << endl;//Print the reversed vector
    for( int num : v){
        cout << num << endl;

    }
    return 0;
}
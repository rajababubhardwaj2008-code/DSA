#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};

    sort(v.rbegin(), v.rend());//STL operation to sort in descending order
    cout << "Sorted Elements:" << endl; //Print the sorted vector
    for( int num:v){
        cout << num << endl;
    }
    return 0;
}
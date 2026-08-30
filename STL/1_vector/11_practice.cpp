#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v = {1,5,4,2,3};

    sort(v.begin(),v.end()); // STL operation to sort in ascending order
    cout << "Sorted Elements:" << endl;//Print the sorted vector

    for( int num :v){
        cout << num << endl;
            
        }
        return 0;
    }

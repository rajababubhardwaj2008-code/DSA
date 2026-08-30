#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n ;
    cout << "enter the number of elements(N)" << endl;
    cin >> n;

    vector<int> vec;
    cout << "enter" <<  n << "elements\n" ;
    for( int i = 0; i<n; ++i){
        int element;
        cin >> element;
        vec.push_back(element);
    }
        cout << "the elements in the vector are:"<< endl;
        for( int num:vec){
            cout << num << " " <<  endl;;
        }
    
   
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n ;
    cout << "Enter the elements:" << endl;
    cin >> n;

    vector<int> v(n);
    for( int i = 0; i < n; ++i){
        cin >> v[i];
      
    }
    // initialize
    int even_count = 0;
    int odd_count = 0;
    
    // condition

    for( int i = 0 ; i < n ; i++){
        if( v[i] % 2 == 0){
            even_count++; // moving forward to count the even no.s
        }
        if(v[i] % 2 != 0){
            odd_count++; // moving forward to count the odd no.s
        }
    }
    cout << "Even Numbers Count:" << even_count << endl;
    cout << "Odd Numbers Coun:" << odd_count << endl;
    return 0;
}
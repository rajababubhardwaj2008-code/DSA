#include<iostream>
#include<stack>
using namespace std;

int main() {
    int n ;
    cout << "Enter number of elements(N)" << endl;
    cin >> n;

    stack<int> st;
     cout << "Enter " << n << " integers:" << endl;
    for( int i = 0 ; i < n; ++i){
        int element;
        cin>>element;
        st.push(element);
        
    }
    cout << "\nOutput" << endl;
    cout << st.top() << endl;
    return 0;
}

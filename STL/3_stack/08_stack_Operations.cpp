#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;
    st.push(10);
    st.push(25);
    st.push(30);
    st.push(15);
    st.push(40);

    int count = 0;
    while(!st.empty()){
        if( st.top() > 20){
            count++; //forward the count
        }
        st.pop();// it removes the top element so that top element cannot be stay forever.
    }
    cout << "Elements larger than 20 are :" << count << endl;
    return 0;
}
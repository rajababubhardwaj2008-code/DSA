#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<string> st;

    st.push("H");
    st.push("E");
    st.push("L");
    st.push("L");
    st.push("O");

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();

    }
    
    cout << endl;
      return 0;

}
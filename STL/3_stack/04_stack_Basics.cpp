#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;
    
    //  First check: Is it empty right after creation?
    if (st.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    //  Push an element onto the stack
    st.push(10);
    cout << "Pushed element: " << st.top() << endl;

    //  Second check: Verify if it's empty now
    if (st.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is now NOT empty." << endl;
    }

    return 0;
}

#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;

    // 1. Manually build the sample stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    //  Loop continuously until there are zero plates left in the pile
    cout << "Removed elements: ";
    while (!st.empty()) {
        //  Look at the item on top
        cout << st.top() << " "; 
        
        //  Throw that item away so the one underneath becomes the new top
        st.pop(); 
    }
    cout << endl;

    return 0;
}


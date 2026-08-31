#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;

    // Build the sample stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    //  Create a temporary stack to act as a data backup
    stack<int> temp;

    cout << "Printing Stack Elements (Top to Bottom): ";
    while (!st.empty()) {
        // Print the current top element
        cout << st.top() << " ";
        
        // Save it inside the temp backup stack before throwing it away
        temp.push(st.top());
        st.pop();
    }
    cout << endl;

    //  Refill the original stack so it isn't destroyed
    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }

    //  Verification check: Verify the original stack is still fully intact
    cout << "Verification - Original Stack Top is still: " << st.top() << endl;
    cout << "Verification - Original Stack Size is still: " << st.size() << endl;

    return 0;
}
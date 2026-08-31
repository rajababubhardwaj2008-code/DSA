#include <iostream>
#include <stack>
using namespace std;

int main() {

    string s;
    cout << "Enter brackets: ";
    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.length(); i++) {

        // Opening brackets
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        }

        // Closing brackets
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {

            // If stack is empty, no opening bracket exists
            if (st.empty()) {
                cout << "Not Balanced" << endl;
                return 0;
            }

            // Check matching brackets
            if ((s[i] == ')' && st.top() == '(') ||
                (s[i] == ']' && st.top() == '[') ||
                (s[i] == '}' && st.top() == '{')) {

                st.pop();
            }
            else {
                cout << "Not Balanced" << endl;
                return 0;
            }
        }
    }

    // If nothing is left, brackets are balanced
    if (st.empty()) {
        cout << "Balanced" << endl;
    }
    else {
        cout << "Not Balanced" << endl;
    }

    return 0;
}

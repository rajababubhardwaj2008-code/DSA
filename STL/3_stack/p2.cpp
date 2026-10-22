#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        string currentString = "";
        int currentNum = 0;

        for (char c : s) {
            if (isdigit(c)) {
                // Form the multi-digit number (e.g., '3' and '2' -> 32)
                currentNum = currentNum * 10 + (c - '0');
            } 
            else if (c == '[') {
                // Push the current count and current string onto their respective stacks
                numStack.push(currentNum);
                strStack.push(currentString);
                
                // Reset for the content inside the brackets
                currentNum = 0;
                currentString = "";
            } 
            else if (c == ']') {
                // Bracket closed: fetch the multiplier and the previous string fragment
                int k = numStack.top();
                numStack.pop();
                
                string previousString = strStack.top();
                strStack.pop();
                
                // Repeat currentString k times
                string repeatedString = "";
                for (int i = 0; i < k; i++) {
                    repeatedString += currentString;
                }
                
                // Append the repeated block to the string built before the opening bracket
                currentString = previousString + repeatedString;
            } 
            else {
                // Ordinary character, append to the current active string segment
                currentString += c;
            }
        }

        return currentString;
    }
};

// Driver code to test the functionality
int main() {
    Solution solver;
    
    string test1 = "3[a]2[bc]";
    string test2 = "3[a2[c]]";
    
    cout << "Input: " << test1 << " -> Decoded: " << solver.decodeString(test1) << endl;
    cout << "Input: " << test2 << " -> Decoded: " << solver.decodeString(test2) << endl;
    
    return 0;
}

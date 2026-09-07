#include <iostream>
#include <string>
#include <deque>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        result.reserve(s.size()); 
        
        int opened = 0;
        deque<char> dq(s.begin(), s.end());
        
        while (!dq.empty()) {
            char ch = dq.front();
            dq.pop_front(); 
            
            if (ch == '(') {
                if (opened > 0) {
                    result.push_back(ch); 
                }
                opened++;
            } else {
                opened--;
                if (opened > 0) {
                    result.push_back(ch); 
                }
            }
        }
        
        return result;
    }
};


int main() {
    Solution solver;
    string input = "(()())(())";
    
    string output = solver.removeOuterParentheses(input);
    
    cout << "Input:" << input << endl;
    cout << "Output:" << output << endl;
    return 0;
}

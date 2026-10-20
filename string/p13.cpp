#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Base case: If the input vector is empty, return an empty string
        if (strs.empty()) return "";
        
        // Sort the strings alphabetically.
        // This brings the lexicographically smallest string to the front (index 0)
        // and the lexicographically largest string to the back (last index).
        sort(strs.begin(), strs.end());
        
        string first = strs[0];
        string last = strs[strs.size() - 1];
        string result = "";
        
        // We only need to compare the first and last strings.
        // Any character common to both first and last will automatically
        // be common to all strings sorted in between them.
        for (size_t i = 0; i < first.length(); i++) {
            if (first[i] == last[i]) {
                result.push_back(first[i]);
            } else {
                // Break at the very first mismatch
                break;
            }
        }
        
        return result;
    }
};


int main() {
    Solution solver;
    vector<string> strs = {"flower", "flow", "flight"};
    
    cout << "Longest Common Prefix: \"" << solver.longestCommonPrefix(strs) << "\"" << endl;
    
    return 0;
}

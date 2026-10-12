#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Hash map to store sorted string as key and matching anagrams as values
        unordered_map<string, vector<string>> anagramMap;
        
        for (string s : strs) {
            string sorted_s = s;
            // Sorting the string creates a unique "signature" for all anagrams
            sort(sorted_s.begin(), sorted_s.end());
            
            // Push the original string into the vector matching this sorted key
            anagramMap[sorted_s].push_back(s);
        }
        
        // Collect all grouped anagram vectors into the final result vector
        vector<vector<string>> result;
        for (auto pair : anagramMap) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};

// Driver code to test the implementation
int main() {
    Solution solver;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    
    vector<vector<string>> grouped = solver.groupAnagrams(strs);
    
    // Printing the grouped anagrams
    cout << "[" << endl;
    for (const auto& group : grouped) {
        cout << "  [";
        for (size_t i = 0; i < group.size(); ++i) {
            cout << "\"" << group[i] << "\"";
            if (i < group.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    cout << "]" << endl;
    
    return 0;
}

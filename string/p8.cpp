#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Vector to store the last seen index of each ASCII character.
        // Initialized to -1 because 0 is a valid string index.
        vector<int> lastSeen(256, -1);
        
        int maxLength = 0;
        int left = 0; // Left boundary of the sliding window
        
        // Loop through the string with the right pointer
        for (int right = 0; right < s.length(); ++right) {
            char currentChar = s[right];
            
            // If the character was seen before and falls inside the current window,
            // shrink the window by moving the left pointer past the last seen position.
            if (lastSeen[currentChar] >= left) {
                left = lastSeen[currentChar] + 1;
            }
            
            // Update the last seen position of the current character
            lastSeen[currentChar] = right;
            
            // Calculate and update the maximum length found so far
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};

int main() {
    Solution solver;
    
    // Test Case 1
    string s1 = "abcabcbb";
    cout << "Test 1 (\"" << s1 << "\"): " << solver.lengthOfLongestSubstring(s1) << " (Expected: 3)\n";
    
    // Test Case 2
    string s2 = "bbbbb";
    cout << "Test 2 (\"" << s2 << "\"): " << solver.lengthOfLongestSubstring(s2) << " (Expected: 1)\n";
    
    // Edge Case: Empty string
    string s4 = "";
    cout << "Test 4 (Empty String): " << solver.lengthOfLongestSubstring(s4) << " (Expected: 0)\n";
    
    return 0;
}

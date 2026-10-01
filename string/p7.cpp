#include <iostream>
#include <string>
#include <vector>

using namespace std;

int firstUniqChar(string s) {
    // Array to store the count of each lowercase English letter
    vector<int> count(26, 0);
    
    // Step 1: Count the frequency of each character
    for (char c : s) {
        count[c - 'a']++;
    }
    
    // Step 2: Find the first character with a count of 1
    for (int i = 0; i < s.length(); i++) {
        if (count[s[i] - 'a'] == 1) {
            return i; // Return the 0-indexed position
        }
    }
    
    return -1; // Return -1 if no unique character exists
}

int main() {
    string s = "geeksforgeeks";
    int index = firstUniqChar(s);
    
    if (index != -1) {
        cout << "The first unique character is '" << s[index] << "' at index " << index << endl;
    } else {
        cout << "-1" << endl;
    }
    
    return 0;
}

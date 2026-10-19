#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    // A vector of strings to map each digit to its corresponding keypad letters
    const vector<string> phone_map = {
        "",     "",     "abc",  "def",  // 0, 1, 2, 3
        "ghi",  "jkl",  "mno",          // 4, 5, 6
        "pqrs", "tuv",  "wxyz"          // 7, 8, 9
    };

    void backtrack(int index, string& digits, string& current_combination, vector<string>& result) {
        // Base case: if the current combination length matches digits length,
        // we have formed a complete combination.
        if (index == digits.length()) {
            result.push_back(current_combination);
            return;
        }

        // Get the letters corresponding to the current digit
        int digit_char = digits[index] - '0'; // Convert char to int
        string letters = phone_map[digit_char];

        // Loop through all letters mapped to the current digit
        for (char letter : letters) {
            current_combination.push_back(letter);    // Choose
            backtrack(index + 1, digits, current_combination, result); // Explore next digit
            current_combination.pop_back();            // Unchoose (backtrack)
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        
        // Base case: if the input string is empty, return an empty vector
        if (digits.empty()) {
            return result;
        }

        string current_combination = "";
        backtrack(0, digits, current_combination, result);
        
        return result;
    }
};

// Example Usage
int main() {
    Solution solver;
    string digits = "23";
    vector<string> combinations = solver.letterCombinations(digits);

    cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}

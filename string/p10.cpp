#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    void backtrack(vector<string>& result, string current_string, int open_count, int close_count, int n) {
        // Base case: if the string reaches the maximum required length, it's complete
        if (current_string.length() == 2 * n) {
            result.push_back(current_string);
            return;
        }

        // Rule 1: We can always add an open parenthesis if we haven't used all 'n' of them
        if (open_count < n) {
            backtrack(result, current_string + "(", open_count + 1, close_count, n);
        }

        // Rule 2: We can only add a close parenthesis if it doesn't exceed the open ones
        if (close_count < open_count) {
            backtrack(result, current_string + ")", open_count, close_count + 1, n);
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};

// Example Usage
int main() {
    Solution solver;
    int n = 3;
    vector<string> combinations = solver.generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}

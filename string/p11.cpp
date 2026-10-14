#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isInterleave(string s1, string s2, string target) {
        // If the combined lengths don't match, it's impossible
        if (s1.length() + s2.length() != target.length()) {
            return false;
        }

        int n = s1.length();
        int m = s2.length();

        // Create a DP table initialized to false
        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

        // Base case: empty s1 and empty s2 matches empty target
        dp[0][0] = true;

        // Fill the first column (where s2 is empty)
        for (int i = 1; i <= n; ++i) {
            dp[i][0] = dp[i - 1][0] && (s1[i - 1] == target[i - 1]);
        }

        // Fill the first row (where s1 is empty)
        for (int j = 1; j <= m; ++j) {
            dp[0][j] = dp[0][j - 1] && (s2[j - 1] == target[j - 1]);
        }

        // Fill the rest of the DP table
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                // Current character index in the target string
                int target_idx = i + j - 1;

                // Check if current char matches s1's last char OR s2's last char
                bool matchS1 = dp[i - 1][j] && (s1[i - 1] == target[target_idx]);
                bool matchS2 = dp[i][j - 1] && (s2[j - 1] == target[target_idx]);

                dp[i][j] = matchS1 || matchS2;
            }
        }

        return dp[n][m];
    }
};

int main() {
    Solution solver;

    // Test Case 1
    string s1 = "aabcc";
    string s2 = "dbbca";
    string target1 = "aadbbcbcac";
    cout << "Test 1: " << (solver.isInterleave(s1, s2, target1) ? "True" : "False") << endl; // Output: True

    // Test Case 2
    string target2 = "aadbbbaccc";
    cout << "Test 2: " << (solver.isInterleave(s1, s2, target2) ? "True" : "False") << endl; // Output: False

    return 0;
}

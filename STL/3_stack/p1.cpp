#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1); // Initialize result array with -1
        stack<int> st;             // Monotonic stack to store indices
        
        // Traverse the array twice to simulate the circular behavior
        for (int i = 2 * n - 1; i >= 0; i--) {
            int current_index = i % n;
            
            // Pop elements from the stack that are smaller than or equal to the current element
            while (!st.empty() && st.top() <= nums[current_index]) {
                st.pop();
            }
            
            // If we are in the first pass (actual array bounds), the top of the stack is our NGE
            if (i < n) {
                if (!st.empty()) {
                    result[current_index] = st.top();
                }
            }
            
            // Push the current element onto the stack for upcoming elements on the left
            st.push(nums[current_index]);
        }
        
        return result;
    }
};

int main() {
    Solution solver;
    vector<int> nums = {1, 2, 1};
    
    vector<int> ans = solver.nextGreaterElements(nums);
    
    cout << "Next Greater Elements: ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

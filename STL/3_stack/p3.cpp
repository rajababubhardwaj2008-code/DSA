#include<iostream>
#include<vector>
#include<stack>
using namespace std;


class Solution {
public:
    vector<int> nextGreater(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n, -1);   // everyone starts with -1
        stack<int> st;               // stores indices still waiting

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[i] > arr[st.top()]) {
                result[st.top()] = arr[i];   // arr[i] is the answer for the waiting index
                st.pop();
            }
            st.push(i);
        }

        return result;
    }
};

int main() {
    Solution solver; 
    vector<int> nums = {4, 5, 2, 25};
    
    vector<int> ans = solver.nextGreater(nums);
    
    cout << "Next Greater Elements: ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

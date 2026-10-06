#include <iostream>
#include <vector>
#include <algorithm> // For reverse

using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    if (nums.empty()) return leaders;

    // The rightmost element is always a leader
    int n = nums.size();
    int max_from_right = nums[n - 1];
    leaders.push_back(max_from_right);

    // Scan the vector from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] > max_from_right) {
            max_from_right = nums[i];
            leaders.push_back(max_from_right);
        }
    }

    // Reverse the result to maintain the original left-to-right order
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> result = findLeaders(nums);

    cout << "Leaders in the vector: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

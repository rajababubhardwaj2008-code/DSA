#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> mergeIntervals(vector<pair<int, int>>& intervals) {
    if (intervals.empty()) return {};

    sort(intervals.begin(), intervals.end());
    vector<pair<int, int>> merged = {intervals[0]};

    for (auto& cur : intervals) {
        if (cur.first <= merged.back().second) 
            merged.back().second = max(merged.back().second, cur.second);
        else 
            merged.push_back(cur);
    }
    return merged;
}

int main() {
    vector<pair<int, int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    
    for (auto& x : mergeIntervals(intervals)) 
        cout << "[" << x.first << ", " << x.second << "] ";
        
    return 0;
}

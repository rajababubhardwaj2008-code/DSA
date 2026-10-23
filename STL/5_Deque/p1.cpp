#include <iostream>
#include <deque>

using namespace std;

class RecentCounter {
private:
    deque<int> q; // Stores the timestamps of the requests

public:
    RecentCounter() {
        // Constructor clears or initializes data if needed
    }
    
    int ping(int t) {
        // 1. Add the current timestamp to the back of the deque
        q.push_back(t);
        
        // 2. Remove all timestamps that fall outside the [t - 3000, t] window from the front
        while (!q.empty() && q.front() < t - 3000) {
            q.pop_front();
        }
        
        // 3. The remaining size represents the number of valid recent requests
        return q.size();
    }
};

// Driver code to demonstrate functionality
int main() {
    RecentCounter* counter = new RecentCounter();
    
    cout << "ping(1):    " << counter->ping(1)    << " (Valid window: [-2999, 1])" << endl;
    cout << "ping(100):  " << counter->ping(100)  << " (Valid window: [-2900, 100])" << endl;
    cout << "ping(3001): " << counter->ping(3001) << " (Valid window: [1, 3001])" << endl;
    cout << "ping(3002): " << counter->ping(3002) << " (Valid window:, timestamp 1 evicted)" << endl;
    
    delete counter;
    return 0;
}

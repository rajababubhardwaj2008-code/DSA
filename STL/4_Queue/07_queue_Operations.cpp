#include <iostream>
#include <queue>
#include <climits> // Needed for INT_MIN
using namespace std;

int main() {
    queue<int> q;

    // 1. Initialize the queue with given values
    q.push(10);
    q.push(50);
    q.push(20);
    q.push(40);
    q.push(30);

    //  Set max_val to the smallest possible integer
    int max_val = INT_MIN; 
    int size = q.size();

    
    for (int i = 0; i < size; ++i) {
        int current = q.front();
        q.pop();

        // Update max_val if the current element is larger
        if (current > max_val) {
            max_val = current;
        }

        // Push it back to the rear so the queue isn't destroyed
        q.push(current); 
    }

    
    cout << "Maximum = " << max_val << endl;

    return 0;
}

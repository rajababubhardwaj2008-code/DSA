#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    //  Manually create the queue with 10 20 30 40 50
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    //  Loop until the queue becomes completely empty
    while (!q.empty()) {
        // Print the element currently at the front
        cout << q.front() << " ";
        
        // Remove that front element so the next one moves forward
        q.pop();
    }
    
    cout << endl;
    return 0;
}

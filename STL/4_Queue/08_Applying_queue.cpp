#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> q;
    stack<int> s;

    // 1. Initialize the queue with given values
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // 2. Step 1: Pop everything from Queue and Push onto Stack
    // Queue becomes empty: []
    // Stack accumulates elements bottom-to-top: [10, 20, 30, 40, 50 <- Top]
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // 3. Step 2: Pop everything from Stack and Push back onto Queue
    // Because Stack is LIFO, 50 comes out first, then 40, 30...
    // Queue refills in reverse: [50, 40, 30, 20, 10]
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // 4. Print the reversed queue
    cout << "Expected:\n";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}

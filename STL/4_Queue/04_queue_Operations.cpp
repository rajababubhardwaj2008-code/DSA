#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements (N): " << endl;
    cin >> n;

    queue<int> q;

    cout << "Enter the " << n << " elements: " << endl;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        q.push(val);
    }

    // Checking if the queue is empty before printing properties to avoid crashes
    if (!q.empty()) {
        cout << "\nOutput:" << endl;
        cout << "Front = " << q.front() << endl;
        cout << "Back = " << q.back() << endl;
        cout << "Size = " << q.size() << endl;
    } else {
        cout << "\nQueue is empty!" << endl;
    }

    return 0;
}

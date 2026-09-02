#include <iostream>
#include <queue>
using namespace std;

int main() {

    int n;
    cout << "Enter N: ";
    cin >> n;

    queue<string> q;

    // Start with 1
    q.push("1");

    for (int i = 0; i < n; i++) {

        // Get the front number
        string current = q.front();
        q.pop();

        // Print it
        cout << current << endl;

        // Generate next binary numbers
        q.push(current + "0");
        q.push(current + "1");
    }

    return 0;
}
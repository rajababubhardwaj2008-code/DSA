#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);

    // Take vector input
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Take target
    int target;
    cout << "Enter the target: ";
    cin >> target;

    // Search for target
    bool found = false;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (v[i] == target) {
            index = i;
            found = true;
            break;
        }
    }

    // Print result
    if (found) {
        cout << "Element found at index: " << index << endl;
    }
    else {
        cout << "Not Found" << endl;
    }

    return 0;
}
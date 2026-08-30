#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    // Input elements
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Calculate sum
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + v[i];
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
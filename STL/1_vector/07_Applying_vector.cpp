#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);

    // Take input
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Assume first element is both maximum and minimum
    int max = v[0];
    int min = v[0];

    //  maximum and minimum
    for (int i = 1; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }

        if (v[i] < min) {
            min = v[i];
        }
    }

    cout << "Maximum element is: " << max << endl;
    cout << "Minimum element is: " << min << endl;

    return 0;
}

    

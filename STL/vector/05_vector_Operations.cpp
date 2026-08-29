#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "enter the elements(N)" << endl;
    cin >> n;

    vector<int> elements;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        elements.push_back(val);
    }

    cout << "elements before removing" << endl; //use a loop to print the vector elements before removing
    for (int num : elements) {
        cout << num << " ";
    }
    cout << endl; // Added a line break for cleaner output

    if (!elements.empty()) {
        elements.pop_back(); 
    }

    cout << "elements after removing" << endl;
    for (int nums : elements) {
        cout << nums << " ";
    }
    cout << endl;

    return 0;
}

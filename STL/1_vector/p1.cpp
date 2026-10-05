#include <iostream>
#include <vector>
#include <algorithm> // Required for remove()

using namespace std;

int main() {
    // 1. Create a vector with some duplicate elements
    vector<int> numbers = {10, 5, 20, 5, 30, 5, 40};
    int target = 5;

    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // 2. The Erase-Remove Idiom
    // remove() shifts non-target elements to the front and returns the new logical end iterator.
    // erase() then chops off the dead space from that logical end to the actual end.
    numbers.erase(remove(numbers.begin(), numbers.end(), target), numbers.end());

    // 3. Print the modified vector
    cout << "After removing all " << target << "s: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

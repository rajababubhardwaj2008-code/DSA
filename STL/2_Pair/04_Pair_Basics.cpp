#include <iostream>
#include <utility>

using namespace std;

int main() {
    //  Create the pair with initial values
    pair<int, int> p = {10, 20};

    //  Modify the values directly using .first and .second
    p.first = 30;
    p.second = 40;

    // Print the modified values
    cout << p.first << " " << p.second << endl;

    return 0;
}

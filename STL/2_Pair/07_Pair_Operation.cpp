#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main() {
    int id;
    string name;

    cout << "Enter input (e.g., 101 Raja): ";
    cin >> id >> name; // Reads 101 into id, and Raja into name

    //  Create the pair using make_pair()
    // Notice how auto can be used here so we don't have to re-type pair<int, string>
    auto p = make_pair(id, name);

    // Print both values
    cout << "First value: " << p.first << endl;
    cout << "Second value: " << p.second << endl;

    return 0;
}

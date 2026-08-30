#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main() {
    //  Create a vector where each item is a pair of (int, string)
    vector<pair<int, string>> students;

    //  Store the 5 students using push_back with curly braces
    students.push_back({101, "Raja"});
    students.push_back({102, "Aman"});
    students.push_back({103, "Rahul"});
    students.push_back({104, "Priya"});
    students.push_back({105, "Neha"});

    // Print all elements using a standard loop
    cout << "Student Records:\n";
    for (int i = 0; i < students.size(); ++i) {
        cout << "ID: " << students[i].first << ", Name: " << students[i].second << endl;
    }

    return 0;
}

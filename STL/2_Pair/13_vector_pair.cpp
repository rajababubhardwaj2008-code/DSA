#include<iostream>
#include<string>
#include<utility>
#include<vector>

using namespace std;

int main() {
   
    vector<pair<int, string>> students = {
        {101, "Raja"},
        {105, "Aman"},
        {103, "Rahul"},
        {110, "Priya"},
        {102, "Neha"}
    };

    //  Initialize variables to track the best record found so far
    int max_id = -1; 
    string max_student_name = "";

    //  Loop through every single student automatically
    for (int i = 0; i < students.size(); ++i) {
        // If the current student's ID is greater than our current max
        if (students[i].first > max_id) {
            max_id = students[i].first;           // Update the highest ID
            max_student_name = students[i].second; // Remember their name
        }
    }

    // Print the final absolute winner matching the expected output format
    cout << "Highest ID: " << max_id << endl;
    cout << "Student: " << max_student_name << endl;

    return 0;
}

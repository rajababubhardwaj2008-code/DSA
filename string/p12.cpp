#include <iostream>
#include <string>

using namespace std;

// Function to remove all spaces from a string in-place
void removeSpaces(string &str) {
    int count = 0; // Keeps track of non-space characters

    // Traverse the string
    for (int i = 0; i < str.length(); i++) {
        // If the current character is not a space, move it forward
        if (str[i] != ' ') {
            str[count] = str[i];
            count++;
        }
    }
    
    // Resize the string to remove the leftover characters at the end
    str.resize(count);
}

int main() {
    string text = "Hello World! Welcome to C++ programming.";
    
    cout << "Original string: [" << text << "]" << endl;
    
    removeSpaces(text);
    
    cout << "Modified string: [" << text << "]" << endl;
    
    return 0;
}

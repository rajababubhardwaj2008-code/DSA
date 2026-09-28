#include <iostream>
#include <string>
#include <algorithm> // Needed for reverse

using namespace std;

// Function to reverse the order of words in a sentence
void reverseWords(string &s) {
    // Step 1: Reverse the entire string
    reverse(s.begin(), s.end());
    
    int n = s.length();
    int start = 0;
    
    // Step 2: Reverse each individual word back
    for (int end = 0; end <= n; ++end) {
        // If we reach a space or the end of the string, we have found a word boundary
        if (end == n || s[end] == ' ') {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1; // Move the start pointer to the beginning of the next word
        }
    }
}

int main() {
    string sentence = "the sky is blue";
    
    cout << "Original: \"" << sentence << "\"\n";
    
    reverseWords(sentence);
    
    cout << "Reversed: \"" << sentence << "\"\n";
    
    return 0;
}

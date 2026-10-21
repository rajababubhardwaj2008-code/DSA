#include <iostream>
#include <string>
#include <cctype> // Needed for tolower and isalpha

using namespace std;

int main() {
    string text;
    int vowels = 0;
    int consonants = 0;

    // Prompt user for input
    cout << "Enter a string/text: ";
    getline(cin, text);

    // Loop through each character in the string
    for (char ch : text) {
        // Convert to lowercase to handle both case types uniformly
        ch = tolower(ch);

        // Check if the character is an alphabet letter
        if (isalpha(ch)) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } 
            // If it's an alphabet letter and not a vowel, it must be a consonant
            else {
                consonants++;
            }
        }
    }

    // Display the results
    cout << "\n--- Results ---" << endl;
    cout << "Total Vowels: " << vowels << endl;
    cout << "Total Consonants: " << consonants << endl;

    return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "Hello World";
    int count = 0;
    for( int i = 0; i<str.size(); i++){
        if( str[i] >= 'A' && str[i] <= 'Z'){// condition for checking uppercase make sure uppercase came before all lowercases.
            count++;
        }
    }
    cout << "uppercases are :" << count << endl;
    return 0;
}
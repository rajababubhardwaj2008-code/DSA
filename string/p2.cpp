#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "Hello World";
    int count = 0;
    for( int i = 0; i<str.size(); i++){
        if( str[i] >= 'A' && str[i] <= 'Z'){
            count++;
        }
    }
    cout << "uppercases are :" << count << endl;
    return 0;
}
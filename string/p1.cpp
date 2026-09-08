#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "hello";

    int count = 0;
    for( int i = 0; i< str.size(); i++){
        if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    cout << "count vowels" << count << endl;
    return 0;
}

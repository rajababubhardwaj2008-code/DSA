#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "hello";
    char temp = 0;// in this we take char because temp uses char words not int one.
    int left =0;
    int right = str.size()-1;
 
        while(left <right){// condition for reverse the string 
            temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    
    for( int i = 0; i<str.size(); i++){
        cout << str[i] << " ";

    }
    cout << endl;
}
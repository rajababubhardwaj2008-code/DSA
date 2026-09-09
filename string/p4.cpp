#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "madam";
    int left = 0;
    int right = str.size()-1;

    while(left < right){
        if( str[left] != str[right]){
            cout << "no";
            return 0;
        }else{
            left++;
            right--;
        }
  
        
    }
    cout << "yes it is a palindrome" << endl;
}
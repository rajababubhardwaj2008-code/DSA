#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "hello";
    int temp = 0;
    int left =0;
    int right = str.size()-1;
    for(int i = 0; i<str.size(); i++){
        while(left <right){
            temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }
    for( int i = 0; i<str.size(); i++){
        cout << str[i] << " ";

    }
    cout << endl;
}
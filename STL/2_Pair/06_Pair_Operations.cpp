#include<iostream>
#include<utility>
using namespace std;

int main() {

    pair<int,int> p1 = {10,20};
    pair<int,int> p2 = {10,30};

    if( p1 == p2){
        cout << "pairs are equal" << endl;

    } 
    if( p1 > p2){
        cout << "p1 is greater" << endl;
    }else{
        cout << "p2 is greater" << endl;
    }
    return 0;
}
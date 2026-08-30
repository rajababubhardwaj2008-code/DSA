#include<iostream>
#include<utility>
using namespace std;

int main() {
    
    pair<int,int> p1 = {10,20};
    pair<int,int> p2 = {30,40};

    // swaps operation
    p1.swap(p2);

    cout << "p1 values :" << p1.first << " " << p1.second << endl;
    cout << "p2 values :" << p2.first << " " << p2.second << endl;
    return 0;
}
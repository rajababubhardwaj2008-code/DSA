#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(40);
    dq.push_front(50);
    dq.push_back(5);

    for( int i = 0; i<dq.size() ; i++){
        cout << dq[i] << " " << endl;

    }
    return 0;
}
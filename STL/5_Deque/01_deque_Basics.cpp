#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    cout << "after q1" << endl;
    for( int i = 0; i<dq.size(); i++){
        cout << dq[i] << " " << endl;
    }

    dq.push_front(5);
    dq.push_back(60);
    for( int i = 0; i<dq.size(); i++){
        cout << dq[i] << " " << endl;
    }
    dq.pop_front();
    dq.pop_back();
    for( int i =0; i<dq.size();i++){
        cout << dq[i] << " " << endl;
        
    }
    cout << "front" << dq.front() << endl;
    cout << "back" << dq.back() << endl;
    cout << "size" << dq.size() << endl;
    return 0;
    
}
#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl;
    cout << q.size() << endl;
    q.pop();
    cout << "After pop" << endl;
    if( q.empty()){
        cout << "queue is empty" << endl;
        
    }else{
        cout << "queue is not empty" << endl;

    }
    return 0;
}
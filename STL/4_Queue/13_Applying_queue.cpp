#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k =2;

    for( int i = 0; i<k; i++){
        q.push(q.front());
        q.pop();
    }
    cout << "after rotate k times" << q.front() << endl;
  

    while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
}
return 0;
    
}
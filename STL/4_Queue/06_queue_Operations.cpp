#include<iostream>
#include<stack>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(25);
    q.push(30);
    q.push(15);
    q.push(40);

    int count = 0;
    while(!q.empty()){
        if( q.front() > 20){
            count++; //forward the count
        }
        q.pop();// it removes the top element so that top element cannot be stay forever.
    }
    cout << "Elements larger than 20 are :" << count << endl;
    return 0;
}
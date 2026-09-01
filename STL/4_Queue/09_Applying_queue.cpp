#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    int sum = 0;

        while(!q.empty()){
           sum += q.front();
            q.pop();
        }
    
    cout << "sum is "  << sum<< endl;
    return 0;
}
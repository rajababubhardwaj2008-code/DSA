#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(1);
    q.push(23);
    q.push(5);

    int min_val = q.front();

    for( int i = 0; i<q.size(); i++){
        int current = q.front();
        q.pop();
    
    if(current < min_val){
        min_val = current;
    }
    q.push(current);
}
    cout << "min value:" << min_val << endl;
    return 0;
}
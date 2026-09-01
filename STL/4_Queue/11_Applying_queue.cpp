#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    int target;
    cout << "enter target:" << endl;
    cin>>target;
    bool found = false;

    for( int i = 0; i<q.size(); i++){
        if(q.front() == target){
            found = true;
            break;
         
        }
           q.pop();

             }
             if( found){
                 cout << "target found" <<  endl;
             } else{
                cout << "target not found" << endl;
             }
    

    return 0;

}
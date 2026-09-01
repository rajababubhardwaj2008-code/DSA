#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq = {10,30,5,33,55};

    int max_val = dq[0];
    for( int i = 0; i<dq.size(); i++){
        if(dq[i] > max_val){
        max_val = dq[i];
        
        }
    }
    cout << "max:" << max_val<< endl;
    return 0;
}
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq = {10,20,30,40,50};
    int k = 2;

    for( int i = 0; i<k; i++){
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout << "elements are " ;
    for( int i = 0; i<dq.size();i++){
        cout << dq[i] << " ";
    }
    cout << endl;
    return 0;
}
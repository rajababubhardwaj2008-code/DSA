#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq = {10,20,33,41,60};

    int n = dq.size();
    for( int i = 0; i<n; i++){
        if(dq.front() % 2 == 0){
            dq.pop_front();
        }else{
            dq.push_back(dq.front());
            dq.pop_front();
        }
    }
    cout << "elements are:" << endl;
        while(!dq.empty()){
            cout << dq.front() << " ";
            dq.pop_front();
        }
    return 0;
  
}
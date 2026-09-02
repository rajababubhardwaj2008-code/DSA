#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq = {10,20,30,33,22};

    int target;
    cout << "enter target" << endl;
    cin>> target;
    bool found = false;


    for( int i = 0; i<dq.size(); i++){
        if(dq[i] == target){
            found = true;
            break;
        }
        if(dq.empty()){
            cout << "element not found" << endl;
        }
           
        
        
    }
    cout << "element found" << target << endl;
    return 0;
}
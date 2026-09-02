#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq = {10,20,30,40,50};
    deque<int> reversed;

    while(!dq.empty()){
        int x = dq.back();
        dq.pop_back();

        reversed.push_back(x);

    }
    cout << "reversed deque" << endl;
    while(!reversed.empty()){
        cout << reversed.front() << " ";
        reversed.pop_front();
    }
    
    return 0;

}
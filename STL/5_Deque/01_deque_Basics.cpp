#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    // Q1: Add elements at the back
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    cout << "After Q1: ";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << endl;


    // Q2: Add element at front and back
    dq.push_front(5);
    dq.push_back(60);

    cout << "After Q2: ";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << endl;


    // Q3: Remove one from front and one from back
    dq.pop_front();
    dq.pop_back();

    cout << "After Q3: ";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << endl;


    // Q4: Print front, back and size
    cout << "Front = " << dq.front() << endl;
    cout << "Back = " << dq.back() << endl;
    cout << "Size = " << dq.size() << endl;


    return 0;
}
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30, 33, 22};

    int target;
    cout << "Enter target: " << endl;
    cin >> target;
    
    bool found = false;

  
    for (int i = 0; i < dq.size(); i++) {
        if (dq[i] == target) {
            found = true;
            break; 
        }
    }
    
   
    if (found) {
        cout << "Element found" << target << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

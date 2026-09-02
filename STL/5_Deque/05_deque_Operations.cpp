#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq = {10,55,33,22,20};

    int even_count = 0;
    int odd_count = 0;
    for(int i = 0; i<dq.size(); i++){
        if(dq[i] %2 == 0){
            even_count++;
        }
        if(dq[i]%2 != 0){
            odd_count++;
        }
        
    }
    cout << "evens are " << even_count<< endl;
    cout << "odds are " << odd_count << endl;
    return 0;

}
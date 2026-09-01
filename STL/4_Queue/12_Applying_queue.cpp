#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(55);
    q.push(2);
    q.push(22);

    int even_count = 0;
    int odd_count = 0;

    
    while(!q.empty()) {
        if (q.front()%2 == 0) {
            even_count++; 
        }else{
            odd_count++; 
        }
        q.pop(); 
    }

    cout << "even count" << even_count << endl;
    cout << "odd count" << odd_count << endl;
    return 0;
}

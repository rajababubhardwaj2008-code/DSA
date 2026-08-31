#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> q;

    q.push("Raja");
    q.push("Kamlesh");
    q.push("Deepak");

    cout << q.front() << endl;
    q.pop();

    //after pop
    cout << q.front() << endl;
    

}
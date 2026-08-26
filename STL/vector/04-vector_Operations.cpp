#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> elements;

    elements.push_back(10);
    elements.push_back(20);
    elements.push_back(30);
    elements.push_back(40);
    elements.push_back(50);
    for( int nums:elements){
        cout << "elements are :" << nums << endl;
    }
    return 0;
}

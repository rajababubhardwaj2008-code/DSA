#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n ;
    cout << "Enter the Number of Elements(N)" << endl;
    cin >> n;

    vector<int> elements;
    for( int i = 0; i < n; i++){
        int val;// Changed name so it doesn't conflict with the vector name
        cin>>val;
        elements.push_back(val); // push_back only takes ONE item at a time
    
    }
    if(!elements.empty()){ // checks if vector is empty or not
        cout << "front elements" << elements.front() << endl;
        cout << "back elements" << elements.back() << endl;
    } else{
        cout << "the vector is empty";
    }
    return 0;
}
   
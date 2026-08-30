#include<iostream>
#include<utility>
using namespace std;

int main() {
    pair<int,int> p = {10,20};

  int greater_val = (p.first > p.second) ? p.first :p.second;
    cout << "Greater = " << greater_val << endl;
}
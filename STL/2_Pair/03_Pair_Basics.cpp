#include<iostream>
#include<utility>
using namespace std;

int main() {
    int id;
    cout << "Enter ID:" << endl;
    cin >> id;

    cin.ignore();

    string name;
    cout << "Enter Student Name:" << endl;
     getline(cin, name); 

    pair<int,string> p={id,name};//Pass the actual user variables into the pair

    //Access and print the pair values using p.first and p.second
    cout << "ID =" << p.first << endl;
    cout << "Student Name :" << p.second << endl;
    return 0;

}
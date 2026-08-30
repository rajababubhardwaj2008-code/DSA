#include<iostream>
#include<utility>
using namespace std;

int main() {
     string product;
     cout << "Enter Your Product Name:" << endl;
     cin >> product;

     int price;
     cout << "Enter your Product Price:" << endl;
     cin >> price;

    pair<string,int> p = {product,price};

    cout << "Product : " << p.first << endl;
    cout << "Price : " << p.second << endl;
    return 0;

}
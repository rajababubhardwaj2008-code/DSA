/*In C++, a pair is a simple container from the Standard Template Library (STL)
 that allows you to couple two objects of different or same data types together into
 a single unit. 
 -=-its 3 uses:=-
 1> Returning Two Values from a Single Function
 2> Storing Key-Value Data Pairs
 3> Creating Vectors of Pairs (vector<pair<T1, T2>>)*/

 #include<iostream>
 #include<utility>
 using namespace std;

 int main() {
    pair<int , int> p ={10,20};
    cout << p.first << endl;
    cout << p.second << endl;
 }

 
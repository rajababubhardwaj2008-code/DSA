#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> my_vector;

if( my_vector.empty()){// tells that vector is empty

    cout << "vector is currently empty" << endl;
    cout << "initial size" <<my_vector.size() << endl;
    }

    my_vector.push_back(10);// adding elements in vector by using push_back
    my_vector.push_back(20);
    my_vector.push_back(30);

    cout << "\nAfter adding elements in vector" << endl;
    cout << "vector size" << my_vector.size() << endl;// my_vector.size()  tells the size of my created vector

    for( int num:my_vector){// It automatically iterates over every element inside my_vector from beginning to end.
        cout << num << endl;

    }
    return 0;
}

/*"An array is a concrete box that holds a fixed number of items; 
a vector is a magical backpack that stretches out automatically 
as you stuff more things into it."*/

/* its 3 uses: 
1> Handling Unknown Data Sizes: Use a vector when you don't know how many inputs the user will enter beforehand (e.g., a shopping cart or a list of students).
2> Easy Data Manipulation: Use it when you need to quickly add items to the back (push_back()), remove items (pop_back()), or clear the whole list (clear()).
3> Using Built-in Algorithms: Use a vector when you want to easily sort, reverse, or search through data using C++ STL tools like sort() and find().*/
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

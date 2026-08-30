/*Stack container follows LIFO (Last In First Out) order of insertion and deletion.
 It means that most recently inserted element is removed first and the first inserted element 
 will be removed last. This is done by inserting and deleting elements at only one end of the 
 stack which is generally called the top of the stack.*/

 /* Basic Operations :
 1> inserting elements by using st.push()
 2> removing element by using st.pop()
 3> seeing if stack is empty or not by using st.empty()
 4> checking the size of stack by using st.size()
  if we want to print the latest value of first value we use top()
 */
#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st; 

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << st.top() << endl;
    return 0;
}
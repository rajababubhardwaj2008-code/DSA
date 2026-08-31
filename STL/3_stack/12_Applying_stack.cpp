#include<iostream>
#include<stack>
using namespace std;

class Minstack{
    private:
    stack<int> st;
    stack<int> minst;

    public:
        //push  an element
    void push(int x){
        st.push(x);
        if( minst.empty() || x <= minst.top()){
            minst.push(x);
        }
    }
    //remove top element
    void pop() {
        if( st.empty()){
            return;
        }
        if( st.top() == minst.top()){
            minst.pop();
        }
        st.pop();
    }
    //get top element
    int top() {
        if( st.empty()){
            return -1;
        }
        return st.top();

    }
    //get minimum element
    int getMin() {
        if(st.empty()){
            return -1;

        }
        return minst.top();
    }

};
int main() {
    Minstack st;

    st.push(10);
    st.push(5);
    st.push(20);
    st.push(8);
    st.push(2);

    cout << "top element:" << st.top() << endl;
    cout << "minimum element : " << st.getMin() << endl;

    st.pop();
    cout << "Ater Pop" << endl;
    cout << "top element:" << st.top() << endl;
    cout << "minimum element : " << st.getMin() << endl;

    st.pop();
    cout << "Ater another pop" << endl;
    cout << "top element:" << st.top() << endl;
    cout << "minimum element : " << st.getMin() << endl;
    return 0;

}
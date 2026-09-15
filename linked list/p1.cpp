#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    Node * nodeA = new Node();//creates new node
     Node * nodeB = new Node();
      Node * nodeC = new Node();

      nodeA->data = 10;//passing value to nodeA
      nodeA->next = nodeB;//tells to store the value in A and moves to next nodeB

      nodeB->data = 20;
      nodeB->next = nodeC;

      nodeC->data = 30;
      nodeC->next = nullptr;//at the end node if there is no node then write nullptr

      Node * head = nodeA;//tells that head is the nodeA

      cout << head->data <<endl;//print fist node value
      cout << head->next->data <<endl;
      cout << head->next->next->data <<endl;

      return 0;

}



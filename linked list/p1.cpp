#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    Node * nodeA = new Node();
     Node * nodeB = new Node();
      Node * nodeC = new Node();

      nodeA->data = 10;
      nodeA->next = nodeB;

      nodeB->data = 20;
      nodeB->next = nodeC;

      nodeC->data = 30;
      nodeC->next = nullptr;

      Node * head = nodeA;

      cout << head->data <<endl;
      cout << head->next->data <<endl;
      cout << head->next->next->data <<endl;

      return 0;

}



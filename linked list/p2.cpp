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

      Node* temp = head;  
while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;   
}
cout << endl;
      return 0;

}



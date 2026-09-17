#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
};

Node * insertAtbeginning(Node*head,int value){
    Node * newNode = new Node();
    newNode->data = value;
    newNode->next = head; // connect to old chain first
    head = newNode; // then update local head
    return head;  // hand back the new head to the caller
}

int main() {
    // building the initial list
    Node * nodeA = new Node();
     Node * nodeB = new Node();
      Node * nodeC = new Node();

      nodeA->data = 10;
      nodeA->next = nodeB;

       nodeB->data = 20;
      nodeB->next = nodeC;

       nodeC->data = 30;
      nodeC->next = nullptr;

      Node *head = nodeA;
      head = insertAtbeginning(head,5);//insert 5 at the beginning
      
      Node * temp = head;
      while(temp!= nullptr){// traverse and print one by one element
        cout << temp->data << " ";
        temp =  temp->next;
      }
      cout << endl;
      return 0;
}
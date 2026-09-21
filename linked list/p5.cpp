#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
};

Node* reverseList(Node*head){
    Node * prev = nullptr;
    Node * curr = head;

    while( curr != nullptr){
        Node * next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
};
int main() {
    
    Node * nodeA = new Node();
     Node * nodeB = new Node();
      Node * nodeC = new Node();
       Node * nodeD = new Node();

    nodeA->data = 5;
    nodeA->next = nodeB;
    nodeB->data = 10;
    nodeB->next = nodeC;
    nodeC->data = 20;
    nodeC->next = nodeD;
    nodeD->data = 30;
    nodeD->next = nullptr;

    Node* head = nodeA;
    head = reverseList(head);

    Node*temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
       temp = temp->next;

    }
    return 0;
}

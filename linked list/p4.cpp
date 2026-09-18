#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    return head;
}

Node* deleteAtBeginning(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

int main() {
    Node* nodeA = new Node();
    Node* nodeB = new Node();
    Node* nodeC = new Node();
    
    nodeA->data = 10;
    nodeA->next = nodeB;
    nodeB->data = 20;
    nodeB->next = nodeC;
    nodeC->data = 30;
    nodeC->next = nullptr;
    
    Node* head = nodeA;
    head = insertAtBeginning(head, 5);   // 5->10->20->30
    head = deleteAtBeginning(head);       // removes 5, back to 10->20->30
    
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    return 0;
}
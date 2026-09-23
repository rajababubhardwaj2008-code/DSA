#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        return newNode;
    }
    
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    return head;
}

int findLength(Node* head) {
    int count = 0;
    Node* temp = head;
    
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    
    return count;
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
    head = insertAtEnd(head, 40);
    
    cout << "length: " << findLength(head) << endl;
    
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    return 0;
}
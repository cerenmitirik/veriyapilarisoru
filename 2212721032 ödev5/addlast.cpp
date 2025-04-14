#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void addlast(Node*& head, int value) {
    Node* yeni = new Node{value, NULL}; 
    
    if (head == NULL) {
        head = yeni; 
    } else {
        Node* temp = head;
        while (temp->next != NULL) { 
            temp = temp->next;
        }
        temp->next = yeni; 
    }
}

int main() {
    Node* liste = NULL; 
    
    addlast(liste, 10);
    addlast(liste, 20);
    addlast(liste, 30);
    
    Node* gecici = liste;
    while (gecici != NULL) {
        cout << gecici->data << " ";
        gecici = gecici->next;
    }
    return 0;
}

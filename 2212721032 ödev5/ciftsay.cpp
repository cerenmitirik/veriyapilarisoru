#include <iostream>
using namespace std;

struct node {
    int data;
    node* link;
};

int ciftsay(node* list) {
    int count = 0;
    while (list != NULL) {
        if (list->data % 2 == 0) count++;
        list = list->link;
    }
    return count;
}

int main() {
    node* list = NULL;
    
    node* node1 = new node{100, NULL}; 
    node* node2 = new node{55, NULL};
    node* node3 = new node{42, NULL}; 
    
    list = node1;
    node1->link = node2;
    node2->link = node3;
    
    cout << "cift sayili dugum adedi: " << ciftsay(list); 
    
    delete node1;
    delete node2;
    delete node3;
    
    return 0;
}

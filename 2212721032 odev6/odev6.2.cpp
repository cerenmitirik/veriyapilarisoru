

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Düðüm yapýsý
struct Node {
    int data;
    Node* next;
};

// Baðlý listeyi baþlatmak için fonksiyon
Node* createList() {
    return NULL;  // Liste baþlangýçta boþ
}

// Listeye eleman eklemek için fonksiyon
void append(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Listeyi yazdýrma fonksiyonu
void dumpList(Node* head) {
    if (head == NULL) {
        cout << "Liste boþ!" << endl;
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Rastgele baðlý liste oluþturma fonksiyonu
void createRandomList(Node*& head) {
    srand(time(0));  // Rastgele sayý üretici için seed

    for (int i = 0; i < 10; i++) {
        int randomData = rand() % 451 + 50;  // 50 ile 500 arasýnda rastgele sayý
        append(head, randomData);
    }
}

// Ana program
int main() {
    Node* list = createList();  // Boþ bir baðlý liste oluþtur

    // Rastgele verilerle listeyi oluþtur
    createRandomList(list);

    // Listeyi yazdýr
    cout << "Listeyi yazdýralým:" << endl;
    dumpList(list);

    return 0;
}


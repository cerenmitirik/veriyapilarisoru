#include <iostream>
using namespace std;

// Düðüm yapýsý
struct Node {
    int data;
    Node* next;
};

// Baðlý Dairesel Listeyi baþlatmak için fonksiyon
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
        head->next = head;  // Ýlk elemanýn kendisine iþaret etmesi saðlanýr
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;  // Yeni eleman baþa baðlanacak þekilde sonlanýr
    }
}

// Son düðümü silme fonksiyonu (cutlast)
void cutlast(Node*& head) {
    if (head == NULL) {
        cout << "Liste boþ!" << endl;
        return;
    }

    // Tek eleman varsa
    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    Node* prev = NULL;
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;  // Sondan bir önceki eleman baþa baðlanýr
    delete temp;  // Son eleman silinir
}

// Listeyi yazdýrma fonksiyonu
void display(Node* head) {
    if (head == NULL) {
        cout << "Liste boþ!" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(tekrar baþa döner)" << endl;
}

// Belleði temizleme fonksiyonu (isteðe baðlý)
void deleteList(Node*& head) {
    while (head != NULL) {
        cutlast(head);
    }
}

// Ana program
int main() {
    Node* list = createList();  // Baðlý dairesel listeyi oluþtur

    cout << "Listeye 10, 20, 30 ve 40 ekliyoruz..." << endl;
    append(list, 10);
    append(list, 20);
    append(list, 30);
    append(list, 40);

    cout << "Listeyi yazdýralým:" << endl;
    display(list);  // Listeyi yazdýr

    cout << "Son elemaný siliyoruz..." << endl;
    cutlast(list);  // Son elemaný sil

    cout << "Listeyi yazdýralým:" << endl;
    display(list);  // Yeni listeyi yazdýr

    cout << "Bir eleman daha siliyoruz..." << endl;
    cutlast(list);  // Tekrar bir eleman sil

    cout << "Listeyi yazdýralým:" << endl;
    display(list);  // Yeni listeyi yazdýr

    // Bellek temizleme
    deleteList(list);

    return 0;
}


#include <iostream>
using namespace std;

// D���m yap�s�
struct Node {
    int data;
    Node* next;
};

// Ba�l� Dairesel Listeyi ba�latmak i�in fonksiyon
Node* createList() {
    return NULL;  // Liste ba�lang��ta bo�
}

// Listeye eleman eklemek i�in fonksiyon
void append(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        head->next = head;  // �lk eleman�n kendisine i�aret etmesi sa�lan�r
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;  // Yeni eleman ba�a ba�lanacak �ekilde sonlan�r
    }
}

// Son d���m� silme fonksiyonu (cutlast)
void cutlast(Node*& head) {
    if (head == NULL) {
        cout << "Liste bo�!" << endl;
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

    prev->next = head;  // Sondan bir �nceki eleman ba�a ba�lan�r
    delete temp;  // Son eleman silinir
}

// Listeyi yazd�rma fonksiyonu
void display(Node* head) {
    if (head == NULL) {
        cout << "Liste bo�!" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(tekrar ba�a d�ner)" << endl;
}

// Belle�i temizleme fonksiyonu (iste�e ba�l�)
void deleteList(Node*& head) {
    while (head != NULL) {
        cutlast(head);
    }
}

// Ana program
int main() {
    Node* list = createList();  // Ba�l� dairesel listeyi olu�tur

    cout << "Listeye 10, 20, 30 ve 40 ekliyoruz..." << endl;
    append(list, 10);
    append(list, 20);
    append(list, 30);
    append(list, 40);

    cout << "Listeyi yazd�ral�m:" << endl;
    display(list);  // Listeyi yazd�r

    cout << "Son eleman� siliyoruz..." << endl;
    cutlast(list);  // Son eleman� sil

    cout << "Listeyi yazd�ral�m:" << endl;
    display(list);  // Yeni listeyi yazd�r

    cout << "Bir eleman daha siliyoruz..." << endl;
    cutlast(list);  // Tekrar bir eleman sil

    cout << "Listeyi yazd�ral�m:" << endl;
    display(list);  // Yeni listeyi yazd�r

    // Bellek temizleme
    deleteList(list);

    return 0;
}


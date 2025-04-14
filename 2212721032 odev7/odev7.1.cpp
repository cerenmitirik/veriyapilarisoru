#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Listeye eleman ekleyen fonksiyon (sona ekleme)
void ekle(Node*& head, int veri) {
    Node* yeni = new Node;
    yeni->data = veri;
    yeni->next = NULL;

    if (head == NULL) {
        head = yeni;
        head->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = yeni;
        yeni->next = head;
    }
}

// Listenin son düðümünü silen fonksiyon
void cutlast(Node*& head) {
    if (head == NULL) {
        cout << "Liste bos.\n";
        return;
    }

    // Tek eleman varsa
    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    Node* onceki = NULL;
    Node* temp = head;

    while (temp->next != head) {
        onceki = temp;
        temp = temp->next;
    }

    onceki->next = head;
    delete temp;
}

// Listeyi yazdýran fonksiyon
void yazdir(Node* head) {
    if (head == NULL) {
        cout << "Liste bos.\n";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(basa doner)\n";
}

// Ana program
int main() {
    Node* liste = NULL;

    // Eleman ekleyelim
    ekle(liste, 10);
    ekle(liste, 20);
    ekle(liste, 30);
    ekle(liste, 40);

    cout << "Ilk hali:\n";
    yazdir(liste);

    cout << "Son eleman siliniyor...\n";
    cutlast(liste);
    yazdir(liste);

    cout << "Bir tane daha siliniyor...\n";
    cutlast(liste);
    yazdir(liste);

    return 0;
}
 


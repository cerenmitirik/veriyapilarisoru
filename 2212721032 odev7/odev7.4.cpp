#include <iostream>
using namespace std;

// D���m yap�s�
struct Node {
    int data;
    Node* next;
};

// �ki ba�l� listeyi kar��la�t�ran fonksiyon
bool karsilastir(Node* liste1, Node* liste2) {
    while (liste1 != NULL && liste2 != NULL) {
        if (liste1->data != liste2->data) {
            return false; // Veri uyu�muyorsa ayn� de�ildir
        }
        liste1 = liste1->next;
        liste2 = liste2->next;
    }

    // Her ikisi de ayn� anda NULL olmal� (uzunluk da ayn� olmal�)
    return (liste1 == NULL && liste2 == NULL);
}

// Eleman ekleme (listenin sonuna)
void sonaEkle(Node*& bas, int veri) {
    Node* yeni = new Node{veri, NULL};
    if (bas == NULL) {
        bas = yeni;
    } else {
        Node* temp = bas;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = yeni;
    }
}

// Listeyi yazd�ran yard�mc� fonksiyon
void yazdir(Node* bas) {
    Node* temp = bas;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Ana program
int main() {
    Node* liste1 = NULL;
    Node* liste2 = NULL;

    // Her iki listeye ayn� elemanlar� ekleyelim
    sonaEkle(liste1, 10);
    sonaEkle(liste1, 20);
    sonaEkle(liste1, 30);

    sonaEkle(liste2, 10);
    sonaEkle(liste2, 20);
    sonaEkle(liste2, 30);

    cout << "Liste 1: ";
    yazdir(liste1);

    cout << "Liste 2: ";
    yazdir(liste2);

    // Kar��la�t�rma
    if (karsilastir(liste1, liste2)) {
        cout << "Listeler birbirinin kopyas�d�r.\n";
    } else {
        cout << "Listeler birbirinden farkl�d�r.\n";
    }

    return 0;
}


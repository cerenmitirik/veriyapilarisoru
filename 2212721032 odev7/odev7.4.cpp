#include <iostream>
using namespace std;

// Düðüm yapýsý
struct Node {
    int data;
    Node* next;
};

// Ýki baðlý listeyi karþýlaþtýran fonksiyon
bool karsilastir(Node* liste1, Node* liste2) {
    while (liste1 != NULL && liste2 != NULL) {
        if (liste1->data != liste2->data) {
            return false; // Veri uyuþmuyorsa ayný deðildir
        }
        liste1 = liste1->next;
        liste2 = liste2->next;
    }

    // Her ikisi de ayný anda NULL olmalý (uzunluk da ayný olmalý)
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

// Listeyi yazdýran yardýmcý fonksiyon
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

    // Her iki listeye ayný elemanlarý ekleyelim
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

    // Karþýlaþtýrma
    if (karsilastir(liste1, liste2)) {
        cout << "Listeler birbirinin kopyasýdýr.\n";
    } else {
        cout << "Listeler birbirinden farklýdýr.\n";
    }

    return 0;
}


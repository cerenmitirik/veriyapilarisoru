#include <iostream>
using namespace std;

// D���m yap�s�
struct Node {
    int data;
    Node* next;
};

// Dairesel ba�l� listeyi do�rusal ba�l� listeye d�n��t�ren fonksiyon
Node* donustur(Node* bas) {
    if (bas == NULL)
        return NULL;

    Node* temp = bas;

    while (temp->next != bas) {
        temp = temp->next;
    }

    temp->next = NULL; // Daireselli�i sona erdir

    return bas; // Art�k do�rusal listenin ba��
}

// Listeyi yazd�rma fonksiyonu
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
    // Dairesel ba�l� liste olu�tur
    Node* n1 = new Node{10, NULL};
    Node* n2 = new Node{20, NULL};
    Node* n3 = new Node{30, NULL};

    n1->next = n2;
    n2->next = n3;
    n3->next = n1; // Daireselli�i tamamla

    cout << "D�n��t�rmeden �nce dairesel liste (ilk 3 eleman):\n";
    Node* temp = n1;
    for (int i = 0; i < 3; i++) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "(basa d�ner)\n";

    // D�n��t�r
    Node* dogrusal = donustur(n1);

    cout << "D�n��t�rmeden sonra do�rusal liste:\n";
    yazdir(dogrusal);

    return 0;
}


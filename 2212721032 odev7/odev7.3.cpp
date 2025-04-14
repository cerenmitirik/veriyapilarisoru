#include <iostream>
using namespace std;

// Düðüm yapýsý
struct Node {
    int data;
    Node* next;
};

// Dairesel baðlý listeyi doðrusal baðlý listeye dönüþtüren fonksiyon
Node* donustur(Node* bas) {
    if (bas == NULL)
        return NULL;

    Node* temp = bas;

    while (temp->next != bas) {
        temp = temp->next;
    }

    temp->next = NULL; // Daireselliði sona erdir

    return bas; // Artýk doðrusal listenin baþý
}

// Listeyi yazdýrma fonksiyonu
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
    // Dairesel baðlý liste oluþtur
    Node* n1 = new Node{10, NULL};
    Node* n2 = new Node{20, NULL};
    Node* n3 = new Node{30, NULL};

    n1->next = n2;
    n2->next = n3;
    n3->next = n1; // Daireselliði tamamla

    cout << "Dönüþtürmeden önce dairesel liste (ilk 3 eleman):\n";
    Node* temp = n1;
    for (int i = 0; i < 3; i++) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "(basa döner)\n";

    // Dönüþtür
    Node* dogrusal = donustur(n1);

    cout << "Dönüþtürmeden sonra doðrusal liste:\n";
    yazdir(dogrusal);

    return 0;
}


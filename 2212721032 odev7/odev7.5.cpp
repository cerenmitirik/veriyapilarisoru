#include <iostream>
using namespace std;

// Ba�l� liste d���m yap�s�
struct Node {
    int data;
    Node* next;
};

// Ortalama alma fonksiyonu
float ortalamaal(Node* head) {
    if (head == NULL) return 0;  // E�er liste bo�sa, 0 d�nd�r
    int toplam = 0, sayac = 0;
    Node* current = head;

    // Ba�l� dairesel listenin tamam�n� dola�
    do {
        toplam += current->data;  // Ge�erli d���m�n verisini topla
        sayac++;  // Sayac� art�r
        current = current->next;  // Bir sonraki d���me ge�
    } while (current != head);  // Listenin ba��na d�nene kadar devam et

    return static_cast<float>(toplam) / sayac;  // Ortalamay� hesapla
}

// Ana program
int main() {
    // Ba�l� dairesel listeyi olu�turma
    Node* head = new Node;
    head->data = 10;

    Node* second = new Node;
    second->data = 20;
    head->next = second;

    Node* third = new Node;
    third->data = 30;
    second->next = third;

    // Dairesel ba�lant� yap�yoruz
    third->next = head;  // Son d���m ba�a ba�lan�yor

    // Ortalamay� hesapla
    float ortalama = ortalamaal(head);
    
    // Sonucu ekrana yazd�r
    cout << "Dairesel listedeki elemanlar�n ortalamas�: " << ortalama << endl;

    return 0;
}



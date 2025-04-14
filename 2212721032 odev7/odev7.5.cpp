#include <iostream>
using namespace std;

// Baðlý liste düðüm yapýsý
struct Node {
    int data;
    Node* next;
};

// Ortalama alma fonksiyonu
float ortalamaal(Node* head) {
    if (head == NULL) return 0;  // Eðer liste boþsa, 0 döndür
    int toplam = 0, sayac = 0;
    Node* current = head;

    // Baðlý dairesel listenin tamamýný dolaþ
    do {
        toplam += current->data;  // Geçerli düðümün verisini topla
        sayac++;  // Sayacý artýr
        current = current->next;  // Bir sonraki düðüme geç
    } while (current != head);  // Listenin baþýna dönene kadar devam et

    return static_cast<float>(toplam) / sayac;  // Ortalamayý hesapla
}

// Ana program
int main() {
    // Baðlý dairesel listeyi oluþturma
    Node* head = new Node;
    head->data = 10;

    Node* second = new Node;
    second->data = 20;
    head->next = second;

    Node* third = new Node;
    third->data = 30;
    second->next = third;

    // Dairesel baðlantý yapýyoruz
    third->next = head;  // Son düðüm baþa baðlanýyor

    // Ortalamayý hesapla
    float ortalama = ortalamaal(head);
    
    // Sonucu ekrana yazdýr
    cout << "Dairesel listedeki elemanlarýn ortalamasý: " << ortalama << endl;

    return 0;
}



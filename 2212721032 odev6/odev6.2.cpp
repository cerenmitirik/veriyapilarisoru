

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// D���m yap�s�
struct Node {
    int data;
    Node* next;
};

// Ba�l� listeyi ba�latmak i�in fonksiyon
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
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Listeyi yazd�rma fonksiyonu
void dumpList(Node* head) {
    if (head == NULL) {
        cout << "Liste bo�!" << endl;
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Rastgele ba�l� liste olu�turma fonksiyonu
void createRandomList(Node*& head) {
    srand(time(0));  // Rastgele say� �retici i�in seed

    for (int i = 0; i < 10; i++) {
        int randomData = rand() % 451 + 50;  // 50 ile 500 aras�nda rastgele say�
        append(head, randomData);
    }
}

// Ana program
int main() {
    Node* list = createList();  // Bo� bir ba�l� liste olu�tur

    // Rastgele verilerle listeyi olu�tur
    createRandomList(list);

    // Listeyi yazd�r
    cout << "Listeyi yazd�ral�m:" << endl;
    dumpList(list);

    return 0;
}


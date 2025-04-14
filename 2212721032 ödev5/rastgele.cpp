#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

// 1. D���m yap�s�
struct node {
    int data;
    node* link;
};

// 2. Liste yazd�rma
void dumplist(node* list) {
    int i = 1;
    while (list != NULL) {
        cout << i++ << ". Dugum - Veri: " << list->data 
             << ", Adres: " << list 
             << ", Sonraki: " << list->link << endl;
        list = list->link;
    }
    if (i == 1) cout << "Liste bos!" << endl;
}

// 3. Yeni d���m olu�turma
node* newnode() {
    node* newnode = new node;
    newnode->link = NULL;
    return newnode;
}

// 4. Ba�a ekleme
void addhead(node* node_, node* &list) {
    node_->link = list;
    list = node_;
}

// 5. Rastgele liste olu�turma (2.�DEV)
node* createlist() {
    node* list = NULL;
    srand(time(0));
    
    for(int i = 0; i < 10; i++) {
        int random_data = 50 + (rand() % 451); 
        node* newNode = newnode();
        newNode->data = random_data;
        addhead(newNode, list);
    }
    return list;
}

int main() {
   
    node* myList = createlist();
    
    // Listeyi yazd�r
    cout << "\ Olusturulan Liste:\n";
    dumplist(myList);
    cout<<"\n";
    
    // Son d���m� kontrol et
    node* current = myList;
    while(current->link != NULL) current = current->link;
    cout << "\ Ilk eklenen dugum (son dugum): " << current->data << endl;
    cout<<"\n";

    
    return 0;
}

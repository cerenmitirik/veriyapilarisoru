#include <iostream>
using namespace std;

// Düğüm yapısı
struct node {
    int data;
    node* link;
};

// 1. lizt listesini ekrana listle
void dumplist(node* list) {
    int i = 1;
    while (list != NULL) {
        cout << i++ << ".Dugum - Adres: " << list << ", Veri: " << list->data 
             << ", Sonraki: " << list->link << endl;
        list = list->link;
    }
    if (i == 1) cout << "Liste bos!" << endl;
}

// 2. hafızadan yeni node al
node* newnode() {
    node* newnode = new node;
    newnode->link = NULL;
    return newnode;
}

// 3. list listesinin son node unu bul
node* last(node* list) {
    if (list == NULL) return NULL;
    while (list->link != NULL) list = list->link;
    return list;
}

// 4. list listesinin başına node_ nodunu ekle 
void addhead(node* node_, node* &list) {
    node_->link = list;
    list = node_;
}

// 5. l1 listesinin sonuna l2 listesini ekle
void concatenate(node* &l1, node* l2) {
    if (l1 == NULL) l1 = l2;
    else last(l1)->link = l2;
}

// 6. yeni bir node'un datasına data_ degerlerini ata
node* cons(int data_) {
    node* newnode_ = newnode();
    newnode_->data = data_;
    return newnode_;
}

// 7. List listesinin kopyasını oluştur 
node* copy(node* list) {
    node* copyList = NULL;
    node* lastNode = NULL;
    
    while (list != NULL) {
        node* newNode = cons(list->data);
        if (copyList == NULL) {
            copyList = newNode;
            lastNode = newNode;
        } else {
            lastNode->link = newNode;
            lastNode = newNode;
        }
        list = list->link;
    }
    return copyList;
}

// 8. list listesinde datası data_ olan node varsa adresini al
node* locate(int data_, node* list) {
    while (list != NULL) {
        if (list->data == data_) return list;
        list = list->link;
    }
    return NULL;
}

// 9. list listesinde node_ adreli node var mı ?
bool member(node* node_, node* list) {
    while (list != NULL) {
        if (list == node_) return true;
        list = list->link;
    }
    return false;
}

// 10. list listesinin ilk nodeunu kes
node* cuthead(node* &list) {
    if (list == NULL) return NULL;
    node* temp = list;
    list = list->link;
    temp->link = NULL;
    return temp;
}

// 11. list listesini iptal et
void free(node* &node_) {
    delete node_;
    node_ = NULL;
}

// 12. adresi point olan node'dan sonra bir node varsa pointi ilerlet
bool advance(node* &point) {
    if (point != NULL && point->link != NULL) {
        point = point->link;
        return true;
    }
    return false;
}

// 13. list listesinde node_ adresli node varsa bul ve sil
bool deletenode(node* node_, node* &list) {
    if (list == NULL) return false;
    
    if (list == node_) {
        node* temp = cuthead(list);
        free(temp);
        return true;
    }
    
    node* current = list;
    while (current->link != NULL) {
        if (current->link == node_) {
            node* temp = current->link;
            current->link = temp->link;
            free(temp);
            return true;
        }
        current = current->link;
    }
    return false;
}

int main() {
    
    // 1. Boş liste oluştur
    node* myList = NULL;
    cout << "\Bos liste yazdirma:\n";
    dumplist(myList);
    cout<<"\n";
    
    // 2. Yeni düğüm oluşturma testi
    node* newNode = newnode();
    newNode->data = 100;
    cout << "\Yeni dugum olusturuldu: " << newNode->data << endl;
    cout<<"\n";
    
    // 3. Başa ekleme testi
    addhead(newNode, myList);
    cout << "\Basa 100 eklendi:\n";
    dumplist(myList);
    cout<<"\n";
    
    // 4. Son düğüm testi
    cout << "\Son dugumun verisi: " << last(myList)->data << endl;
    cout<<"\n";
    
    // 5. cons() testi
    node* node1 = cons(10);
    node* node2 = cons(20);
    node* node3 = cons(30);
    addhead(node1, myList);
    addhead(node2, myList);
    addhead(node3, myList);
    cout << "\ 10,20,30 eklendi:\n";
    dumplist(myList);
    cout<<"\n";
    
    // 6. locate() testi
    node* found = locate(20, myList);
    cout << "\ 20 degeri " << (found ? "bulundu" : "bulunamadi") << endl;
    cout<<"\n";
    
    // 7. member() testi
    cout << "\ node3 listede " << (member(node3, myList) ? "var" : "yok") << endl;
    cout<<"\n";
    
    // 8. cuthead() testi
    node* cut = cuthead(myList);
    cout << "\Bastan kesilen: " << cut->data << "\nYeni liste:\n";
    dumplist(myList);
    addhead(cut, myList); // Geri ekle
    cout<<"\n";
    
    // 9. copy() testi
    node* copiedList = copy(myList);
    cout << "\Kopya liste:\n";
    dumplist(copiedList);
    cout<<"\n";
    
    // 10. advance() testi
    node* iter = myList;
    advance(iter);
    cout << "\Ilerletme sonrasi veri: " << iter->data << endl;
    cout<<"\n";
    
    // 11. concatenate() testi
    node* list2 = cons(40);
    concatenate(list2, cons(50));
    concatenate(myList, list2);
    cout << "\ Birlestirme sonrasi:\n";
    dumplist(myList);
    cout<<"\n";
    
    // 12. deletenode() testi
    node* toDelete = locate(20, myList);
    if (deletenode(toDelete, myList))
        cout << "\20 silindi:\n";
    else
        cout << "\Silme başarisiz\n";
    dumplist(myList);
    cout<<"\n";
    
    // 13. free() testi
    node* singleNode = cons(99);
    cout << "\Tek dugum silme oncesi: " << singleNode->data << endl;
    free(singleNode);
    cout << "Silme sonrasi pointer: " << singleNode << endl;
    cout<<"\n";
    
    return 0;
}

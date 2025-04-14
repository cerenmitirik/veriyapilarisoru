
#include <iostream>
using namespace std;

// Kitap yap�s�
struct kitap {
    int sayfa_sayisi;
    string kitap_adi;
    kitap* next;  // Bir sonraki kitaba i�aret�i
};

// En �ok sayfa say�s�na sahip kitab� bulan fonksiyon
kitap* kalinkitap(kitap* kutuphane) {
    if (kutuphane == NULL) {
        return NULL;  // E�er liste bo�sa NULL d�nd�r
    }

    kitap* enKalin = kutuphane;  // Ba�lang�� olarak ilk kitab� al
    kutuphane = kutuphane->next; // Sonraki kitaplara ge�

    while (kutuphane != NULL) {
        if (kutuphane->sayfa_sayisi > enKalin->sayfa_sayisi) {
            enKalin = kutuphane;  // Daha fazla sayfa varsa g�ncelle
        }
        kutuphane = kutuphane->next;  // Bir sonraki kitaba ge�
    }

    return enKalin;  // En fazla sayfa say�s�na sahip kitab� geri d�nd�r
}

// Ana program
int main() {
    // 3 kitapl�k ba�l� liste olu�tural�m
    kitap* k1 = new kitap{250, "Kitap A", NULL};
    kitap* k2 = new kitap{320, "Kitap B", NULL};
    kitap* k3 = new kitap{180, "Kitap C", NULL};

    // Liste ba�lant�lar�n� kur
    k1->next = k2;
    k2->next = k3;
    k3->next = NULL;

    // En kal�n kitab� bul
    kitap* enKalin = kalinkitap(k1);

    // Sonucu ekrana yazd�r
    if (enKalin != NULL) {
        cout << "En kalin kitap: " << enKalin->kitap_adi
             << " (" << enKalin->sayfa_sayisi << " sayfa)" << endl;
    } else {
        cout << "Kutuphane bos." << endl;
    }

    // Belle�i temizleyelim
    delete k1;
    delete k2;
    delete k3;

    return 0;
}



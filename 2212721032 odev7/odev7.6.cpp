
#include <iostream>
using namespace std;

// Kitap yapýsý
struct kitap {
    int sayfa_sayisi;
    string kitap_adi;
    kitap* next;  // Bir sonraki kitaba iþaretçi
};

// En çok sayfa sayýsýna sahip kitabý bulan fonksiyon
kitap* kalinkitap(kitap* kutuphane) {
    if (kutuphane == NULL) {
        return NULL;  // Eðer liste boþsa NULL döndür
    }

    kitap* enKalin = kutuphane;  // Baþlangýç olarak ilk kitabý al
    kutuphane = kutuphane->next; // Sonraki kitaplara geç

    while (kutuphane != NULL) {
        if (kutuphane->sayfa_sayisi > enKalin->sayfa_sayisi) {
            enKalin = kutuphane;  // Daha fazla sayfa varsa güncelle
        }
        kutuphane = kutuphane->next;  // Bir sonraki kitaba geç
    }

    return enKalin;  // En fazla sayfa sayýsýna sahip kitabý geri döndür
}

// Ana program
int main() {
    // 3 kitaplýk baðlý liste oluþturalým
    kitap* k1 = new kitap{250, "Kitap A", NULL};
    kitap* k2 = new kitap{320, "Kitap B", NULL};
    kitap* k3 = new kitap{180, "Kitap C", NULL};

    // Liste baðlantýlarýný kur
    k1->next = k2;
    k2->next = k3;
    k3->next = NULL;

    // En kalýn kitabý bul
    kitap* enKalin = kalinkitap(k1);

    // Sonucu ekrana yazdýr
    if (enKalin != NULL) {
        cout << "En kalin kitap: " << enKalin->kitap_adi
             << " (" << enKalin->sayfa_sayisi << " sayfa)" << endl;
    } else {
        cout << "Kutuphane bos." << endl;
    }

    // Belleði temizleyelim
    delete k1;
    delete k2;
    delete k3;

    return 0;
}



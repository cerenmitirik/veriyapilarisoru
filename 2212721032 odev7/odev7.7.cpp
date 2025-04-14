#include <iostream>
using namespace std;

// Kitap yap�s�
struct kitap {
    int sayfa_sayisi;
    string kitap_adi;
    kitap* next;
};

// Recursive olarak en �ok sayfal� kitab� bulan fonksiyon
kitap* kalinkitap(kitap* kutuphane) {
    // E�er listede sadece bir eleman varsa veya son elemana geldiysek
    if (kutuphane == NULL || kutuphane->next == NULL)
        return kutuphane;

    // Listeyi geriye do�ru gez ve di�er kitaplarla kar��la�t�r
    kitap* enKalan = kalinkitap(kutuphane->next);

    if (kutuphane->sayfa_sayisi > enKalan->sayfa_sayisi)
        return kutuphane;
    else
        return enKalan;
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

    return 0;
}


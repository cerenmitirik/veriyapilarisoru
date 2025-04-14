#include <iostream>
using namespace std;

// Öğrenci düğümü yapısı
struct ogrenci {
    string ad;
    string soyad;
    string no;
    short yas;
    ogrenci* next;
};

// Listeye yeni öğrenci ekler (listenin sonuna)
ogrenci* ogrenciEkle(ogrenci* bas, string ad, string soyad, string no, short yas) {
    ogrenci* yeni = new ogrenci;
    yeni->ad = ad;
    yeni->soyad = soyad;
    yeni->no = no;
    yeni->yas = yas;
    yeni->next = NULL;

    if (bas == NULL) {
        return yeni;
    } else {
        ogrenci* temp = bas;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = yeni;
        return bas;
    }
}

// Verilen yaştaki öğrencileri ekrana yazdırır ve sayısını gösterir
void ogrencisorgula(ogrenci* bas, short arananYas) {
    int sayac = 0;
    ogrenci* temp = bas;

    while (temp != NULL) {
        if (temp->yas == arananYas) {
            cout << "Ad: " << temp->ad
                 << ", Soyad: " << temp->soyad
                 << ", No: " << temp->no
                 << ", Yas: " << temp->yas << endl;
            sayac++;
        }
        temp = temp->next;
    }

    cout << "\n" << arananYas << " yasindaki ogrenci sayisi: " << sayac << endl;
}

// Ana fonksiyon
int main() {
    ogrenci* sinif = NULL;

    sinif = ogrenciEkle(sinif, "Ali", "Yilmaz", "101", 20);
    sinif = ogrenciEkle(sinif, "Ayse", "Demir", "102", 21);
    sinif = ogrenciEkle(sinif, "Mehmet", "Kaya", "103", 20);

    short yas;
    cout << "Hangi yastaki ogrencileri gormek istiyorsunuz? ";
    cin >> yas;

    cout << "\nOgrenciler:\n";
    ogrencisorgula(sinif, yas);

    return 0;
}


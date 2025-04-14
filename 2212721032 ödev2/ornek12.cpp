#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

#include <iostream> 
using namespace std; 

int main() {
    char *isimler[] = { "Mehmet", "Ahmet", "Ali", "Ayse" }; 
    int i; // sayaç

    cout << sizeof(i) << "\n"; // int tipinin bellekte kapladýðý boyutu yaz
    cout << sizeof(char*) << "\n"; // char pointer'ýn bellekte kapladýðý boyutu yaz
    cout << sizeof(isimler) << "\n"; // isimler dizisinin bellekte kapladýðý toplam boyutu yaz

    cout << "Mehmet ifadesinin bellekteki baslangic adresi: " << (void*)isimler[0] << "\n"; // isimler[0] tuttuðu adres yaz
    cout << "Ahmet ifadesinin bellekteki baslangic adresi: " << (void*)isimler[1] << "\n"; // isimler[1]'in tuttuðu adres yaz
    cout << "Ali ifadesinin bellekteki baslangic adresi: " << (void*)isimler[2] << "\n"; // isimler[2]'nin tuttuðu adres yaz
    cout << "Ayse ifadesinin bellekteki baslangic adresi: " << (void*)isimler[3] << "\n"; // isimler[3]'ün tuttuðu adres yaz

    cout << isimler[1] - isimler[0] << endl; // Ahmet ve Mehmet'in baþlangýç adresleri arasýndaki fark byte cinsinden yaz
    cout << isimler[2] - isimler[1] << endl; // Ali ve Ahmet'in baþlangýç adresleri arasýndaki fark byte cinsinden yaz
    cout << isimler[3] - isimler[2] << endl; // Ayse ve Ali'nin baþlangýç adresleri arasýndaki fark byte cinsinden yaz

    // Diziler birbirine doðrudan atanamaz, diziye iþaret eden pointer'lar aracýlýðýyla atama yapýlabilir.
    isimler[2] = isimler[3]; // Ali'nin yerine Ayse'nin adresini ata

    for (i = 0; i < 4; i++) {
        cout << isimler[i] << ", ";
    }

    return 0;
}

#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

 void ayristir(float x, int *tam, float *ondalik) { // fonksiyon tanımla, float, int pointer'ı ve float pointer'ı alsın
   *tam = (int)x; // x'in tam kısmı tam pointer'ının işaret ettiği yere ata
   *ondalik = x - *tam; // x'in ondalıklı kısmını ondalik pointer'ının işaret ettiği yere ata
  } 

 int main() { 
 
    float a; 
    int tam_kismi; 
    float ondalikli_kismi; 
    
    cout << "Bir ondalikli sayi giriniz: "; 
    cin >> a; // Kullanıcıdan alınan sayı a değişkenine atanıyor.
    
    ayristir(a, &tam_kismi, &ondalikli_kismi); // ayristir fonksiyonunu çagır ve a, tam_kismi'nin adresi ve ondalikli_kismi'nin adresi parametre olarak verilir
    cout << "sayinin tam kismi " << tam_kismi << " ondalikli kismi " << ondalikli_kismi; 
    
	getch(); 
    return 0; 
  } 

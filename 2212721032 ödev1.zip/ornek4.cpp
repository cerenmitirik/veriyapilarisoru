#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

 void ayristir(float x, int *tam, float *ondalik) { // fonksiyon tan�mla, float, int pointer'� ve float pointer'� als�n
   *tam = (int)x; // x'in tam k�sm� tam pointer'�n�n i�aret etti�i yere ata
   *ondalik = x - *tam; // x'in ondal�kl� k�sm�n� ondalik pointer'�n�n i�aret etti�i yere ata
  } 

 int main() { 
 
    float a; 
    int tam_kismi; 
    float ondalikli_kismi; 
    
    cout << "Bir ondalikli sayi giriniz: "; 
    cin >> a; // Kullan�c�dan al�nan say� a de�i�kenine atan�yor.
    
    ayristir(a, &tam_kismi, &ondalikli_kismi); // ayristir fonksiyonunu �ag�r ve a, tam_kismi'nin adresi ve ondalikli_kismi'nin adresi parametre olarak verilir
    cout << "sayinin tam kismi " << tam_kismi << " ondalikli kismi " << ondalikli_kismi; 
    
	getch(); 
    return 0; 
  } 

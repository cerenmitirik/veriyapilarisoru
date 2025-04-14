#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

 void enbuyuk_enkucuk(int x[], int n, int *enbuyuk, int *enkucuk) { //fonksiyon tan�mla, int dizisi, dizinin boyutu, iki tane int pointeri als�n
   int i; 
   *enbuyuk = x[0]; // dizinin ilk eleman�n� enbuyuk pointer'�n�n i�aret etti�i yere ata
   *enkucuk = x[0]; // dizinin ilk eleman�n� enkucuk pointer'�n�n i�aret etti�i yere ata

   for (i = 1; i < n; i++) { 
    if (x[i] > *enbuyuk) //dizinin i. eleman� pointerin i�aret etti�i de�erden b�y�kse alt sat�ra ge� 
        *enbuyuk = x[i]; // i. eleman� enbuyuk pointer'�n�n i�aret etti�i yere atan�r
     if (x[i] < *enkucuk) // e�er dizinin i. eleman� enkucuk pointer'�n�n i�aret etti�i de�erden k���kse alt sat�ra ge�
        *enkucuk = x[i]; // i. eleman� enkucuk pointer'�n�n i�aret etti�i yere atan�r
   } 
 } 

  int main() { 
    int a[] = { 3, 1, 6, 3, 9, 7, 1, 4, 6, 14, 3, 2, 10 }; // int dizisi tan�mla ve de�erleri ata
    int boyut;
	int en_buyuk, en_kucuk; 
    boyut = sizeof(a) / sizeof(a[0]); // dizinin boyutunu hesapla
    
    cout << "a dizisinde " << boyut << " eleman vardir.\n"; 
    enbuyuk_enkucuk(a, boyut, &en_buyuk, &en_kucuk); // fonksiyonu �a��r ve a dizisi,boyutu, en_buyuk'un adresi ve en_kucuk'un adresini parametre olarak ver

    cout << "dizinin en buyuk elemani: " << en_buyuk << " dizinin en kucuk elemani: " << en_kucuk; 
    getch(); 
    return 0;
  } 

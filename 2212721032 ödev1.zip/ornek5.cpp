#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

 void enbuyuk_enkucuk(int x[], int n, int *enbuyuk, int *enkucuk) { //fonksiyon tanýmla, int dizisi, dizinin boyutu, iki tane int pointeri alsýn
   int i; 
   *enbuyuk = x[0]; // dizinin ilk elemanýný enbuyuk pointer'ýnýn iþaret ettiði yere ata
   *enkucuk = x[0]; // dizinin ilk elemanýný enkucuk pointer'ýnýn iþaret ettiði yere ata

   for (i = 1; i < n; i++) { 
    if (x[i] > *enbuyuk) //dizinin i. elemaný pointerin iþaret ettiði deðerden büyükse alt satýra geç 
        *enbuyuk = x[i]; // i. elemaný enbuyuk pointer'ýnýn iþaret ettiði yere atanýr
     if (x[i] < *enkucuk) // eðer dizinin i. elemaný enkucuk pointer'ýnýn iþaret ettiði deðerden küçükse alt satýra geç
        *enkucuk = x[i]; // i. elemaný enkucuk pointer'ýnýn iþaret ettiði yere atanýr
   } 
 } 

  int main() { 
    int a[] = { 3, 1, 6, 3, 9, 7, 1, 4, 6, 14, 3, 2, 10 }; // int dizisi tanýmla ve deðerleri ata
    int boyut;
	int en_buyuk, en_kucuk; 
    boyut = sizeof(a) / sizeof(a[0]); // dizinin boyutunu hesapla
    
    cout << "a dizisinde " << boyut << " eleman vardir.\n"; 
    enbuyuk_enkucuk(a, boyut, &en_buyuk, &en_kucuk); // fonksiyonu çaðýr ve a dizisi,boyutu, en_buyuk'un adresi ve en_kucuk'un adresini parametre olarak ver

    cout << "dizinin en buyuk elemani: " << en_buyuk << " dizinin en kucuk elemani: " << en_kucuk; 
    getch(); 
    return 0;
  } 

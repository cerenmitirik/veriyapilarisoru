#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int *en_buyuk(int *x, int boyut, int *max) { // fonksiyon tan�mla  int pointer'� als�n ve int pointer'� d�nd�rs�n
    int *p; 
    *max = *x; // max pointer'�n�n i�aret etti�i de�ere, x pointer'�n�n i�aret etti�i ilk de�eri ata
    for (p = x; p < x + boyut; p++) // x pointer'�ndan ba�layarak, boyut kadar ilerleyen bir d�ng� olu�tur
       if (*p > *max) // p pointer'�n�n i�aret etti�i de�er, max pointer'�n�n i�aret etti�i de�erden b�y�kse alt sat�ra ge�
        *max = *p; // p pointerinin i�aret etii�i de�eri max pointer'�n�n i�aret etti�i de�ere ata
    return max; // en b�y�k de�erin adresini d�nd�r 
}

 int main() { 
    int a[] = { 2, 4, 1, 6, 5, 8, 3, 2, 5, 6 }; 
    int enbuyuk_deger;
    int *p; // int pointer'� tan�mla
    p = en_buyuk(a, sizeof(a) / sizeof(a[0]), &enbuyuk_deger); // fonksiyonu �a��r ve a dizisi, dizinin boyutu ve enbuyuk_deger de�i�keninin adresi parametre olarak ver.
    
	cout << "dizinin en buyuk elemani:" << *p << "\n"; // p pointer'�n�n i�aret etti�i de�eri yazd�r
    cout << "dizinin en buyuk elemani:" << enbuyuk_deger << "\n"; 
    getch();
    return 0;
  } 

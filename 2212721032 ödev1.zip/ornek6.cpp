#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int *buyuk(int *x, int *y) { 
   if (*x > *y) // x pointer'�n�n i�aret etti�i de�er, y pointer'�n�n i�aret etti�i de�erden b�y�kse
      return x; // x pointer'� d�nd�r�l�yor yani b�y�k olan say�n�n adresi
    else 
      return y; // e�er b�y�k de�ilse y pointer'� d�nd�r�l�yor
 } 

int main() { 
    int a, b; 
    int *p; // int pointer'� tan�mla
    cout << "iki deger giriniz: "; 
    cin >> a >> b; // Kullan�c�n�n girdi�i iki de�er a ve b de�i�kenlerine atan�yor.
    p = buyuk(&a, &b); // fonksiyon �a�r�l�yor ve a ve b de�i�kenlerinin adresleri parametre olarak veriliyor ve d�nd�r�len adres p pointer'�na atan�yor.
    cout << "girilen degerlerden buyuk olan: " << *p; 
  
  getch(); 
  return 0; 
 } 

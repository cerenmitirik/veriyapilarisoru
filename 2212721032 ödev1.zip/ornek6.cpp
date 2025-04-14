#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int *buyuk(int *x, int *y) { 
   if (*x > *y) // x pointer'ýnýn iþaret ettiði deðer, y pointer'ýnýn iþaret ettiði deðerden büyükse
      return x; // x pointer'ý döndürülüyor yani büyük olan sayýnýn adresi
    else 
      return y; // eðer büyük deðilse y pointer'ý döndürülüyor
 } 

int main() { 
    int a, b; 
    int *p; // int pointer'ý tanýmla
    cout << "iki deger giriniz: "; 
    cin >> a >> b; // Kullanýcýnýn girdiði iki deðer a ve b deðiþkenlerine atanýyor.
    p = buyuk(&a, &b); // fonksiyon çaðrýlýyor ve a ve b deðiþkenlerinin adresleri parametre olarak veriliyor ve döndürülen adres p pointer'ýna atanýyor.
    cout << "girilen degerlerden buyuk olan: " << *p; 
  
  getch(); 
  return 0; 
 } 

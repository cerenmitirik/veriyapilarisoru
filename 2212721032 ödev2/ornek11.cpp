#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

  char *birlestir(char *x, char *y, char *z) { // char pointer alan ve char pointer donduren birlestir fonksiyonu tan�mla
    char *p; 
    char *q = z; // z pointer'�n�n adresini q pointer'�na ata
    for(p = x; *p != '\0'; p++, z++) // x pointer'�n�n i�aret etti�i string'in sonuna kadar d�ng�
      *z = *p; // x pointer'�n�n i�aret etti�i karakter, z pointer'�n�n i�aret etti�i yere ata
      
    for(p = y; *p != '\0'; p++, z++) // y pointer'�n�n i�aret etti�i string'in sonuna kadar d�ng�
      *z = *p; // y pointer'�n�n i�aret etti�i karakter, z pointer'�n�n i�aret etti�i yere ata
      *z = '\0'; // z pointer'�n�n i�aret etti�i string'in sonuna null karakteri ekle
      return q; // q pointer'� d�nd�r
 } 

 int main() { 
   char str1[] = "abc", str2[] = "xyz";
   char birlesme[10]; 
   char *q; 
   q = birlestir(str1, str2, birlesme); // fonksiyon �a��r ve str1, str2 ve birlesme dizileri parametre olarak ver, d�nd�r�len de�er q'ya ata
   cout << "birlestirilen string: " << q << "\n"; // q pointer'�n�n i�aret etti�i stringi yazd�r
   
   getch(); 
   return 0; 
 } 

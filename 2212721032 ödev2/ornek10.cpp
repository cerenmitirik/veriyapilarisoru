#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

char birlestir(char *x, char *y, char *z) { // char pointer alan ve char pointer donduren fonksiyon tan�mla
   char *p; 
   for(p = x; *p != '\0'; p++, z++) // x pointer'�n�n i�aret etti�i string'in sonuna kadar d�ng�
   *z = *p; // x pointer'�n�n i�aret etti�i karakter, z pointer'�n�n i�aret etti�i yere ata
    for(p = y; *p != '\0'; p++, z++) // y pointer'�n�n i�aret etti�i string'in sonuna kadar d�ng�
      *z = *p; // y pointer'�n�n i�aret etti�i karakter, z pointer'�n�n i�aret etti�i yere ata
      *z = '\0'; // z pointer'�n�n i�aret etti�i string'in sonuna null karakteri ekle
} 

int main() {
 char str1[] = "abc", str2[] = "xyz"; //  char dizileri tan�mla
 char birlesme[10]; // 10 elemanl� char dizisi tan�mla
 birlestir(str1, str2, birlesme); // fonksiyonu �a��r ve dizileri parametre olarak ver
  cout << "birlestirilen string: " << birlesme << "\n"; 
  
 getch(); 
 return 0; 
} 

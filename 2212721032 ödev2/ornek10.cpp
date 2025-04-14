#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

char birlestir(char *x, char *y, char *z) { // char pointer alan ve char pointer donduren fonksiyon tanýmla
   char *p; 
   for(p = x; *p != '\0'; p++, z++) // x pointer'ýnýn iþaret ettiði string'in sonuna kadar döngü
   *z = *p; // x pointer'ýnýn iþaret ettiði karakter, z pointer'ýnýn iþaret ettiði yere ata
    for(p = y; *p != '\0'; p++, z++) // y pointer'ýnýn iþaret ettiði string'in sonuna kadar döngü
      *z = *p; // y pointer'ýnýn iþaret ettiði karakter, z pointer'ýnýn iþaret ettiði yere ata
      *z = '\0'; // z pointer'ýnýn iþaret ettiði string'in sonuna null karakteri ekle
} 

int main() {
 char str1[] = "abc", str2[] = "xyz"; //  char dizileri tanýmla
 char birlesme[10]; // 10 elemanlý char dizisi tanýmla
 birlestir(str1, str2, birlesme); // fonksiyonu çaðýr ve dizileri parametre olarak ver
  cout << "birlestirilen string: " << birlesme << "\n"; 
  
 getch(); 
 return 0; 
} 

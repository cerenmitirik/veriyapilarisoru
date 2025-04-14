#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

  char *birlestir(char *x, char *y, char *z) { // char pointer alan ve char pointer donduren birlestir fonksiyonu tanýmla
    char *p; 
    char *q = z; // z pointer'ýnýn adresini q pointer'ýna ata
    for(p = x; *p != '\0'; p++, z++) // x pointer'ýnýn iþaret ettiði string'in sonuna kadar döngü
      *z = *p; // x pointer'ýnýn iþaret ettiði karakter, z pointer'ýnýn iþaret ettiði yere ata
      
    for(p = y; *p != '\0'; p++, z++) // y pointer'ýnýn iþaret ettiði string'in sonuna kadar döngü
      *z = *p; // y pointer'ýnýn iþaret ettiði karakter, z pointer'ýnýn iþaret ettiði yere ata
      *z = '\0'; // z pointer'ýnýn iþaret ettiði string'in sonuna null karakteri ekle
      return q; // q pointer'ý döndür
 } 

 int main() { 
   char str1[] = "abc", str2[] = "xyz";
   char birlesme[10]; 
   char *q; 
   q = birlestir(str1, str2, birlesme); // fonksiyon çaðýr ve str1, str2 ve birlesme dizileri parametre olarak ver, döndürülen deðer q'ya ata
   cout << "birlestirilen string: " << q << "\n"; // q pointer'ýnýn iþaret ettiði stringi yazdýr
   
   getch(); 
   return 0; 
 } 

#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
 int main() { 
   int a[] = { 3, 2, 1, 4, 6, 2, 1 }; // dizi tanýmla ve deðerleri ata
   int *p; // int pointer'ý tanýmla
   int boyut, i; 
   boyut = sizeof(a) / sizeof(a[0]); // dizinin boyutunu hesapla
   cout << a << ", " << &a[0] << '\n'; // a dizisinin baþlangýç adresini ve ilk elemanýn adresini yazdýr

   p = &a[0]; // p pointer'ýna a dizisinin ilk elemanýnýn adresini ata
   cout << *p << '\n'; // p pointer'ýnýn iþaret ettiði deðer yani a dizisinin ilk elemanýný yazdýr

   p = a; // p pointer'ýna a dizisinin baþlangýç adresini ata
   
   cout << *p << '\n'; // p pointer'ýnýn iþaret ettiði deðer yani a dizisinin ilk elemanýný yazdýr
   cout << p << ", " << *p << ", " << p + 1 << ", " << *(p + 1) << '\n'; // pointer'ýn adresi, iþaret ettiði deðer, bir sonraki elemanýn adresi ve deðeri yaz
   
   for (i = 0; i < boyut; i++) 
    cout << a[i] << " "; //a dizisinin ilk elemanýný yazdýr 
    cout << '\n'; 
     
  for (p = a; p < &a[boyut]; p++) // a dizisinin baþlangýcýndan son elemanýn adresine kadar döngü
    cout << *p << " "; // p pointer'ýnýn iþaret ettiði deðeri yaz
    cout << '\n'; 

  for (p = a; p < a + boyut; p++)
    cout << *p << " "; // p pointer'ýnýn iþaret ettiði deðeri yazdýr
    cout << '\n';

  for (i = 0; i < boyut; i++) 
    cout << *(a + i) << " "; // a dizisinin i'inci elemaný pointer aritmetiði ile yazdýr
    cout << '\n';

 getch();
 return 0;
 }


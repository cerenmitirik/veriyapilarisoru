#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
 int main() { 
   int a[] = { 3, 2, 1, 4, 6, 2, 1 }; // dizi tan�mla ve de�erleri ata
   int *p; // int pointer'� tan�mla
   int boyut, i; 
   boyut = sizeof(a) / sizeof(a[0]); // dizinin boyutunu hesapla
   cout << a << ", " << &a[0] << '\n'; // a dizisinin ba�lang�� adresini ve ilk eleman�n adresini yazd�r

   p = &a[0]; // p pointer'�na a dizisinin ilk eleman�n�n adresini ata
   cout << *p << '\n'; // p pointer'�n�n i�aret etti�i de�er yani a dizisinin ilk eleman�n� yazd�r

   p = a; // p pointer'�na a dizisinin ba�lang�� adresini ata
   
   cout << *p << '\n'; // p pointer'�n�n i�aret etti�i de�er yani a dizisinin ilk eleman�n� yazd�r
   cout << p << ", " << *p << ", " << p + 1 << ", " << *(p + 1) << '\n'; // pointer'�n adresi, i�aret etti�i de�er, bir sonraki eleman�n adresi ve de�eri yaz
   
   for (i = 0; i < boyut; i++) 
    cout << a[i] << " "; //a dizisinin ilk eleman�n� yazd�r 
    cout << '\n'; 
     
  for (p = a; p < &a[boyut]; p++) // a dizisinin ba�lang�c�ndan son eleman�n adresine kadar d�ng�
    cout << *p << " "; // p pointer'�n�n i�aret etti�i de�eri yaz
    cout << '\n'; 

  for (p = a; p < a + boyut; p++)
    cout << *p << " "; // p pointer'�n�n i�aret etti�i de�eri yazd�r
    cout << '\n';

  for (i = 0; i < boyut; i++) 
    cout << *(a + i) << " "; // a dizisinin i'inci eleman� pointer aritmeti�i ile yazd�r
    cout << '\n';

 getch();
 return 0;
 }


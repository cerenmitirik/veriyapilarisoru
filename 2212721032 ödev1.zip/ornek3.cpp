#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main() { 
   int a = 10; // tamsay� de�i�keni tan�mla ve de�er ata
   int *p, *q; // p ve q tamsay� pointer'lar� tan�mla
   p = &a; // p pointer'�na a de�i�keninin adresini ata
   q = &a; // q pointer'�na a de�i�keninin adresini ata
   (*p)++; // p pointer'�n�n i�aret etti�i de�er yani a de�i�keninin de�erini 1 art�r
   *q += 5; // q pointer'�n�n i�aret etti�i de�er yani a de�i�keninin de�erini 5 art�r
   
   cout << a << '\n'; // a de�i�keninin de�erini yazd�r
   cout << *p << '\n'; // p pointer'�n�n i�aret etti�i de�erini yazd�r
   cout << *q << '\n'; // q pointer'�n�n i�aret etti�i de�erini yazd�r  
   
   getch();    
   return 0;
 } 

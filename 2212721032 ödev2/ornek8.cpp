#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

 int main() { 
   // pointer kullanarak string boyutunu bulma
   
  char a[] = "bu bir string."; 
  char *p; // char pointer'� tan�mlan�yor.
  int n = 0; // string boyutu sayac�=0
  p = a; // p pointer'�na a dizisinin ba�lang�� adresi atan�yor.
  while (*p++ != '\0') // p pointer'�n�n i�aret etti�i karakter null karakteri olana kadar d�ng� devam etsin
    n++; // String boyutu sayac� bir art�r
  cout << "Strigin boyutu: " << n << "\n"; 
  
 while (*p++) // p pointer'� null karakteri ge�tikten sonra da d�ng� devam ediyor ?
   n++; // String boyutu sayac� tekrar art�r
   cout << "Strigin boyutu: " << n << "\n"; 
    
getch(); 
return 0; 
 } 

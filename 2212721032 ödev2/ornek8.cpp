#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

 int main() { 
   // pointer kullanarak string boyutunu bulma
   
  char a[] = "bu bir string."; 
  char *p; // char pointer'ý tanýmlanýyor.
  int n = 0; // string boyutu sayacý=0
  p = a; // p pointer'ýna a dizisinin baþlangýç adresi atanýyor.
  while (*p++ != '\0') // p pointer'ýnýn iþaret ettiði karakter null karakteri olana kadar döngü devam etsin
    n++; // String boyutu sayacý bir artýr
  cout << "Strigin boyutu: " << n << "\n"; 
  
 while (*p++) // p pointer'ý null karakteri geçtikten sonra da döngü devam ediyor ?
   n++; // String boyutu sayacý tekrar artýr
   cout << "Strigin boyutu: " << n << "\n"; 
    
getch(); 
return 0; 
 } 

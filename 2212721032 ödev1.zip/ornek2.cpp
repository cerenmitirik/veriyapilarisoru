#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
  int main() {
    int a = 10, b = 20; // tamsay� de�i�kenleri tan�mla ve de�erleri ata
    int *p; // bir tamsay� pointer'� tan�mla
    p = &a; // p pointer'�na a de�i�keninin adresini ata
    
    cout << a << '\n'; // a de�i�keninin de�erini yaz
    cout << *p << '\n'; // p pointer'�n�n i�aret etti�i de�eri yaz
    
    *p = 30; // p pointer'�n�n i�aret etti�i de�eri 30 olarak de�i�tir
    
    cout << a << '\n'; // a de�i�keninin yeni de�erini yazd�r
    cout << *p << '\n'; // p pointer'�n�n i�aret etti�i de�eri yazd�r 

    p = &b; // p pointer'�na b de�i�keninin adresini ata
	*p = 40; // p pointer'�n�n i�aret etti�i de�er yani b de�i�keninin de�eri 40 olarak de�i�tir
	 
    cout << a << '\n'; // a de�i�keninin de�erini yaz
    cout << *p << '\n'; // p pointer'�n�n i�aret etti�i de�eri yaz
    cout << b << '\n'; // b de�i�keninin yeni de�erini yaz
    
    getch(); 
    return 0; 
} 

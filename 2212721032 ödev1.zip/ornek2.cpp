#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
  int main() {
    int a = 10, b = 20; // tamsayý deðiþkenleri tanýmla ve deðerleri ata
    int *p; // bir tamsayý pointer'ý tanýmla
    p = &a; // p pointer'ýna a deðiþkeninin adresini ata
    
    cout << a << '\n'; // a deðiþkeninin deðerini yaz
    cout << *p << '\n'; // p pointer'ýnýn iþaret ettiði deðeri yaz
    
    *p = 30; // p pointer'ýnýn iþaret ettiði deðeri 30 olarak deðiþtir
    
    cout << a << '\n'; // a deðiþkeninin yeni deðerini yazdýr
    cout << *p << '\n'; // p pointer'ýnýn iþaret ettiði deðeri yazdýr 

    p = &b; // p pointer'ýna b deðiþkeninin adresini ata
	*p = 40; // p pointer'ýnýn iþaret ettiði deðer yani b deðiþkeninin deðeri 40 olarak deðiþtir
	 
    cout << a << '\n'; // a deðiþkeninin deðerini yaz
    cout << *p << '\n'; // p pointer'ýnýn iþaret ettiði deðeri yaz
    cout << b << '\n'; // b deðiþkeninin yeni deðerini yaz
    
    getch(); 
    return 0; 
} 

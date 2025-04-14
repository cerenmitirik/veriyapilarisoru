#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main() { 
   int a = 10; // tamsayý deðiþkeni tanýmla ve deðer ata
   int *p, *q; // p ve q tamsayý pointer'larý tanýmla
   p = &a; // p pointer'ýna a deðiþkeninin adresini ata
   q = &a; // q pointer'ýna a deðiþkeninin adresini ata
   (*p)++; // p pointer'ýnýn iþaret ettiði deðer yani a deðiþkeninin deðerini 1 artýr
   *q += 5; // q pointer'ýnýn iþaret ettiði deðer yani a deðiþkeninin deðerini 5 artýr
   
   cout << a << '\n'; // a deðiþkeninin deðerini yazdýr
   cout << *p << '\n'; // p pointer'ýnýn iþaret ettiði deðerini yazdýr
   cout << *q << '\n'; // q pointer'ýnýn iþaret ettiði deðerini yazdýr  
   
   getch();    
   return 0;
 } 

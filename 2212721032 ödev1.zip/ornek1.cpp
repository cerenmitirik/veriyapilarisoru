 #include <stdio.h>
 #include <iostream>
 #include <conio.h>
 using namespace std; 

int main() { 
 int a = 10, b = 20; //tamsay� de�i�kenlerini tan�mla ve de�erleri ata
 short int x[5]; // 5 elemanl� short integer dizisi tan�mla
 cout << a << ", " << b << "\n"; // de�i�kenlerinin de�erleri yaz    
 cout << hex << a << ", " << b << "\n"; // de�i�kenlerinin de�erleri hexadecimal olarak yaz
 cout << &a << ", " << &b << "\n"; // a ve b de�i�kenlerinin adreslerini yaz 
 cout << sizeof(int) << "\n"; // byte olarak int veri tipinin boyutunu yaz
 cout << sizeof(short) << "\n"; // byte olarak short int veri tipinin boyutunu yaz
 cout << sizeof(char) << "\n"; // byte  olarak char veri tipinin boyutunu yaz
 cout << &x[0] << ", " << &x[1] << ", " << &x[2] << "\n"; // dizisinin ilk �� eleman�n�n adreslerini yaz
 getch(); 
 return 0; 
 } 

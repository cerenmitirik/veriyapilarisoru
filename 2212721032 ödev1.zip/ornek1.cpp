 #include <stdio.h>
 #include <iostream>
 #include <conio.h>
 using namespace std; 

int main() { 
 int a = 10, b = 20; //tamsayı değişkenlerini tanımla ve değerleri ata
 short int x[5]; // 5 elemanlı short integer dizisi tanımla
 cout << a << ", " << b << "\n"; // değişkenlerinin değerleri yaz    
 cout << hex << a << ", " << b << "\n"; // değişkenlerinin değerleri hexadecimal olarak yaz
 cout << &a << ", " << &b << "\n"; // a ve b değişkenlerinin adreslerini yaz 
 cout << sizeof(int) << "\n"; // byte olarak int veri tipinin boyutunu yaz
 cout << sizeof(short) << "\n"; // byte olarak short int veri tipinin boyutunu yaz
 cout << sizeof(char) << "\n"; // byte  olarak char veri tipinin boyutunu yaz
 cout << &x[0] << ", " << &x[1] << ", " << &x[2] << "\n"; // dizisinin ilk üç elemanının adreslerini yaz
 getch(); 
 return 0; 
 } 

 #include <stdio.h>
 #include <iostream>
 #include <conio.h>
 using namespace std; 

int main() { 
 int a = 10, b = 20; //tamsayý deðiþkenlerini tanýmla ve deðerleri ata
 short int x[5]; // 5 elemanlý short integer dizisi tanýmla
 cout << a << ", " << b << "\n"; // deðiþkenlerinin deðerleri yaz    
 cout << hex << a << ", " << b << "\n"; // deðiþkenlerinin deðerleri hexadecimal olarak yaz
 cout << &a << ", " << &b << "\n"; // a ve b deðiþkenlerinin adreslerini yaz 
 cout << sizeof(int) << "\n"; // byte olarak int veri tipinin boyutunu yaz
 cout << sizeof(short) << "\n"; // byte olarak short int veri tipinin boyutunu yaz
 cout << sizeof(char) << "\n"; // byte  olarak char veri tipinin boyutunu yaz
 cout << &x[0] << ", " << &x[1] << ", " << &x[2] << "\n"; // dizisinin ilk üç elemanýnýn adreslerini yaz
 getch(); 
 return 0; 
 } 

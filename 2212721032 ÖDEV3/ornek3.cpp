#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
int *ip; // i�aret�i dinamik olarak ayr�lan bellek b�lgesinin adresini tutacak
ip = (int*) calloc(5, sizeof(int)); // calloc fonksiyonu ile 5 adet int boyutunda bellek b�lgesi ay�r ve (int*) ile t�r d�n���m� yap.
// Ayr�lan belle�in adresi ip i�aret�isine ata

for (int i = 0; i < 5; i++) {
    *(ip + i) = (i + 1) * 10; // 10, 20, 30, 40, 50 de�erleri atan�r callocla 0 la ba�lar �unku
	// (*(ip + i), ip'nin g�sterdi�i bellek adresinden i kadar ilerleyerek o adresteki de�eri ifade eder.)??
}

for (int i = 0; i < 5; i++) {
    cout << (ip + i) << " adresindeki de�er: " << *(ip + i) << endl; // adresi ve de�eri yazd�r
}
cout << endl; 

ip[0] = 5; //  ilk elemana 5 ata
ip[2] = 25; //  ���nc� eleman�na 25 ata
ip[4] = 45; // be�inci eleman�na 45 ata

for (int i = 0; i < 5; i++) {
    cout << (ip + i) << " adresindeki de�er: " << *(ip + i) << endl; //  adresi ve yeni de�eri yazd�r
}
cout << endl;

for (int i = 0; i < 5; i++) {
    cout << (ip + i) << " adresindeki de�er: " << ip[i] << endl; // adresi ve de�eri bu sefer (ip[i] kullanarak) yazd�r
}

free(ip); // serbest b�rak

}

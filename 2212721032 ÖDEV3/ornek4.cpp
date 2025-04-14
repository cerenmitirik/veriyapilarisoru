#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
int *ip; // i�aret�i ayr�lan bellek b�lgesinin adresini tutsun
ip = (int*) calloc(5, sizeof(int)); // 5 tane (int) boyutunda bellek b�lgesi ay�r ve.(int*) ile t�r d�n���m� yap
// Ayr�lan belle�in adresi ip i�aret�isine ata
for (int i = 0; i < 5; i++) {
    *(ip + i) = (i + 1) * 10; // 10, 20, 30, 40, 50 de�erleri ata [*(ip + i), ip'nin g�sterdi�i bellek adresinden i kadar ilerleyerek o adresteki de�eri ifade eder.?]
}
for (int i = 0; i < 5; i++) {
    cout << (ip + i) << " adresindeki de�er: " << *(ip + i) << endl; // adresi ve de�eri yazd�r
}
cout << endl; 

ip = (int*) realloc(ip, 10 * sizeof(int)); // realloc fonksiyonu ile ip'nin g�sterdi�i bellek b�lgesinin boyutu 10 tamsay�ya ��kar
// realloc, mevcut verileri koruyarak yeni boyutta bellek ay�r�r.
printf("Geni�letilmi� bellek de�erleri:\n");
for (int i = 5; i < 10; i++) { // geni�letilmi�
    *(ip + i) = i + 1; // Geni�letilen bellek b�lgesinin her eleman�na 6, 7, 8, 9, 10 de�erlerini ata
}
for (int i = 0; i < 10; i++) {
    cout << (ip + i) << " adresindeki de�er: " << *(ip + i) << endl; // eski ve geni�letilen adresi ve de�eri yazd�r
}
	
	free(ip); 
}

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std; 
int main(){
int *ip; // i�aret�i dinamik olarak ayr�lan bellek b�lgesinin adresini tutacak
ip = (int*) malloc(sizeof(int)); // malloc fonksiyonu ile int boyutunda bir bellek b�lgesi ay�r
// int* ile t�r d�n���m� yap. Ayr�lan belle�in adresi ip i�aret�isine ata
*ip = 10; // Ayr�lan bellek b�lgesine 10 de�erini ata. *ip, ip'nin g�sterdi�i bellek adresindeki DE�ER� ifade eder.
cout << "Tahsis edilen bellek adres baslangici:" << ip; // ba�lang�� ADRES�N� yazd�r
cout << "\nTahsis edilen bellekteki veri:" << *ip; // Ayr�lan bellekteki veri yani 10'u yazd�r
free(ip); // malloc ile ayr�lan bellek b�lgesi free fonksiyonu ile serbest b�rak
}

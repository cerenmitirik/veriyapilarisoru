#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
char *cp = "Teknoloji"; //  karakter i�aret�isi tan�mla ve "Teknoloji" ba�lang�� adresine ata
cout << cp << endl; // cp'nin g�sterdi�i string yani Teknoloji yazd�r
cout << cp[0] << endl; // string'in ilk karakterini yazd�r
cout << cp[1] << endl; // string'in ikinci karakterini yazd�r
free(cp); // String statik bellek b�lgesinde saklan�r ve free ile serbest b�rak�lamaz ??

char *cpl; 
cpl = (char*) malloc(40); // 40 byte'l�k dinamik bellek ay�r ve adresi cpl'ye ata
if (!cpl) { cout << "Bellek tahsis hatas�!"; exit(1); } // ayr�lan belle�in ba�ar�l� olup olmad��� kontrol et sonu� e�er Ba�ar�s�z ise hata mesaj� ver ve program� sonland�r
// cpl = "Bilgisayar"; // hata
//strcpy(cpl, "Bilgisayar"); // Do�ru kullan�m�  strcpy fonksiyonu ile "Bilgisayar" string'i cpl'nin g�sterdi�i dinamik belle�e kopyala ??
strcpy(cpl,"Bilgisayar");
cout << cpl << endl; // g�sterdi�i stringi yazd�r
cout << cpl[0] << endl; //  g�sterdi�i string'in ilk karakterini yazd�r
cout << cpl[1] << endl; // string'in ikinci karakterini yazd�r
free(cpl); // malloc ile ayr�lan bellek b�lgesi free ile serbest b�rak
}
// ��kt�da B�LG�SAYAR �n ��kt�s�n� bu kod vermiyor 

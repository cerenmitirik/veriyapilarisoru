#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
int *ip; // i�aret�i ayr�lan bellek b�lgesinin adresini tutsun
ip = new int; // int boyutunda dinamik bellek ay�r ve ayr�lan belle�in adresi ip i�aret�isine ata
if (!ip) { // bellek ayr�m� Ba�ar�s�z ise hata mesaj� ver ve program� sonlan�r
    cout << "Bellek tahsis hatas�!";
    exit(1);
}
// ip = new int(21); // 22. sat�r yerine bu kullan�m ile int de�er b�y�kl���nde bellek tahsis ederek bellek adresine 21 de�erini atar.

*ip = 21; // 20. sat�r yerine i�aret�i yoluyla belle�e 21 de�erini atar.
cout << ip << " bellek adresindeki de�er: " << *ip; // Ayr�lan belle�in adresini ve de�erini yazd�r
delete ip; //serbest b�rak	
}

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
int *ip, id; // int i�aret�i ve bir int de�i�keni tan�mla
ip = new int[5]; // dizi i�in dinamik bellek ayr�r ve ayr�lan belle�in adresi ip i�aret�isine ata
if (!ip) { //ba�ar�l� m� kontrol et 
    cout << "Bellek tahsis hatas�!";
    exit(1);
}
ip[0] = 5; 
ip[1] = 15; 
ip[2] = 25; 
ip[3] = 35; 
ip[4] = 45; 

for (id = 0; id < 5; id++) { 
    cout << &ip[id] << " bellek adresindeki deger: " << ip[id] << endl; // Dizideki her eleman�n�n adresini ve de�erini yazd�r 
}

delete [] ip; // dinamik belle�i serbest b�rak
}

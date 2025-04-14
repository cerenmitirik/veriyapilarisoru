#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
int *ip, id; // int iþaretçi ve bir int deðiþkeni tanýmla
ip = new int[5]; // dizi için dinamik bellek ayrýr ve ayrýlan belleðin adresi ip iþaretçisine ata
if (!ip) { //baþarýlý mý kontrol et 
    cout << "Bellek tahsis hatasý!";
    exit(1);
}
ip[0] = 5; 
ip[1] = 15; 
ip[2] = 25; 
ip[3] = 35; 
ip[4] = 45; 

for (id = 0; id < 5; id++) { 
    cout << &ip[id] << " bellek adresindeki deger: " << ip[id] << endl; // Dizideki her elemanýnýn adresini ve deðerini yazdýr 
}

delete [] ip; // dinamik belleði serbest býrak
}

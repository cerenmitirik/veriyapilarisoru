#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
int *ip; // iþaretçi ayrýlan bellek bölgesinin adresini tutsun
ip = (int*) calloc(5, sizeof(int)); // 5 tane (int) boyutunda bellek bölgesi ayýr ve.(int*) ile tür dönüþümü yap
// Ayrýlan belleðin adresi ip iþaretçisine ata
for (int i = 0; i < 5; i++) {
    *(ip + i) = (i + 1) * 10; // 10, 20, 30, 40, 50 deðerleri ata [*(ip + i), ip'nin gösterdiði bellek adresinden i kadar ilerleyerek o adresteki deðeri ifade eder.?]
}
for (int i = 0; i < 5; i++) {
    cout << (ip + i) << " adresindeki deðer: " << *(ip + i) << endl; // adresi ve deðeri yazdýr
}
cout << endl; 

ip = (int*) realloc(ip, 10 * sizeof(int)); // realloc fonksiyonu ile ip'nin gösterdiði bellek bölgesinin boyutu 10 tamsayýya çýkar
// realloc, mevcut verileri koruyarak yeni boyutta bellek ayýrýr.
printf("Geniþletilmiþ bellek deðerleri:\n");
for (int i = 5; i < 10; i++) { // geniþletilmiþ
    *(ip + i) = i + 1; // Geniþletilen bellek bölgesinin her elemanýna 6, 7, 8, 9, 10 deðerlerini ata
}
for (int i = 0; i < 10; i++) {
    cout << (ip + i) << " adresindeki deðer: " << *(ip + i) << endl; // eski ve geniþletilen adresi ve deðeri yazdýr
}
	
	free(ip); 
}

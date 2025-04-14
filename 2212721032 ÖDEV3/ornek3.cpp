#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
int *ip; // iþaretçi dinamik olarak ayrýlan bellek bölgesinin adresini tutacak
ip = (int*) calloc(5, sizeof(int)); // calloc fonksiyonu ile 5 adet int boyutunda bellek bölgesi ayýr ve (int*) ile tür dönüþümü yap.
// Ayrýlan belleðin adresi ip iþaretçisine ata

for (int i = 0; i < 5; i++) {
    *(ip + i) = (i + 1) * 10; // 10, 20, 30, 40, 50 deðerleri atanýr callocla 0 la baþlar çunku
	// (*(ip + i), ip'nin gösterdiði bellek adresinden i kadar ilerleyerek o adresteki deðeri ifade eder.)??
}

for (int i = 0; i < 5; i++) {
    cout << (ip + i) << " adresindeki deðer: " << *(ip + i) << endl; // adresi ve deðeri yazdýr
}
cout << endl; 

ip[0] = 5; //  ilk elemana 5 ata
ip[2] = 25; //  üçüncü elemanýna 25 ata
ip[4] = 45; // beþinci elemanýna 45 ata

for (int i = 0; i < 5; i++) {
    cout << (ip + i) << " adresindeki deðer: " << *(ip + i) << endl; //  adresi ve yeni deðeri yazdýr
}
cout << endl;

for (int i = 0; i < 5; i++) {
    cout << (ip + i) << " adresindeki deðer: " << ip[i] << endl; // adresi ve deðeri bu sefer (ip[i] kullanarak) yazdýr
}

free(ip); // serbest býrak

}

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std; 
int main(){
int *ip; // iþaretçi dinamik olarak ayrýlan bellek bölgesinin adresini tutacak
ip = (int*) malloc(sizeof(int)); // malloc fonksiyonu ile int boyutunda bir bellek bölgesi ayýr
// int* ile tür dönüþümü yap. Ayrýlan belleðin adresi ip iþaretçisine ata
*ip = 10; // Ayrýlan bellek bölgesine 10 deðerini ata. *ip, ip'nin gösterdiði bellek adresindeki DEÐERÝ ifade eder.
cout << "Tahsis edilen bellek adres baslangici:" << ip; // baþlangýç ADRESÝNÝ yazdýr
cout << "\nTahsis edilen bellekteki veri:" << *ip; // Ayrýlan bellekteki veri yani 10'u yazdýr
free(ip); // malloc ile ayrýlan bellek bölgesi free fonksiyonu ile serbest býrak
}

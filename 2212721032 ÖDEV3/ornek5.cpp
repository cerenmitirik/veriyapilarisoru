#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
char *pdizisatir[5]; // 5 elemanlý char iþaretçi dizisi tanýmla dizi, her biri dinamik olarak ayrýlmýþ bir string'in adresini tutsun
int id;

for (id = 0; id < 5; id++) { 
    pdizisatir[id] = (char*)malloc(20 * sizeof(char)); // Her dizi elemaný için 20 karakterlik dinamik bellek ayýr
	// (char*) ile tür dönüþümü yap. ayrýlan adres pdizisatir dizisindeki elemana ata
}

for (id = 0; id < 5; id++) { 
    strcpy(pdizisatir[id], "Karakter dizisi"); //"Karakter dizisi" string'i, pdizisatir dizisindeki her elemanýnýn gösterdiði dinamik belleðe kopyala
}

for (id = 0; id < 5; id++) {
    cout << pdizisatir[id] << endl; // pdizisatir dizisinin her elemanýnýn gösterdiði stringi yazdýr
}

for (id = 0; id < 5; id++) {
    free(pdizisatir[id]); // serbest býrak
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

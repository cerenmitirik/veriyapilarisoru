#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
char *pdizisatir[5]; // 5 elemanl� char i�aret�i dizisi tan�mla dizi, her biri dinamik olarak ayr�lm�� bir string'in adresini tutsun
int id;

for (id = 0; id < 5; id++) { 
    pdizisatir[id] = (char*)malloc(20 * sizeof(char)); // Her dizi eleman� i�in 20 karakterlik dinamik bellek ay�r
	// (char*) ile t�r d�n���m� yap. ayr�lan adres pdizisatir dizisindeki elemana ata
}

for (id = 0; id < 5; id++) { 
    strcpy(pdizisatir[id], "Karakter dizisi"); //"Karakter dizisi" string'i, pdizisatir dizisindeki her eleman�n�n g�sterdi�i dinamik belle�e kopyala
}

for (id = 0; id < 5; id++) {
    cout << pdizisatir[id] << endl; // pdizisatir dizisinin her eleman�n�n g�sterdi�i stringi yazd�r
}

for (id = 0; id < 5; id++) {
    free(pdizisatir[id]); // serbest b�rak
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

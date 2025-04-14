#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int *en_buyuk(int *x, int boyut, int *max) { // fonksiyon tanýmla  int pointer'ý alsýn ve int pointer'ý döndürsün
    int *p; 
    *max = *x; // max pointer'ýnýn iþaret ettiði deðere, x pointer'ýnýn iþaret ettiði ilk deðeri ata
    for (p = x; p < x + boyut; p++) // x pointer'ýndan baþlayarak, boyut kadar ilerleyen bir döngü oluþtur
       if (*p > *max) // p pointer'ýnýn iþaret ettiði deðer, max pointer'ýnýn iþaret ettiði deðerden büyükse alt satýra geç
        *max = *p; // p pointerinin iþaret etiiði deðeri max pointer'ýnýn iþaret ettiði deðere ata
    return max; // en büyük deðerin adresini döndür 
}

 int main() { 
    int a[] = { 2, 4, 1, 6, 5, 8, 3, 2, 5, 6 }; 
    int enbuyuk_deger;
    int *p; // int pointer'ý tanýmla
    p = en_buyuk(a, sizeof(a) / sizeof(a[0]), &enbuyuk_deger); // fonksiyonu çaðýr ve a dizisi, dizinin boyutu ve enbuyuk_deger deðiþkeninin adresi parametre olarak ver.
    
	cout << "dizinin en buyuk elemani:" << *p << "\n"; // p pointer'ýnýn iþaret ettiði deðeri yazdýr
    cout << "dizinin en buyuk elemani:" << enbuyuk_deger << "\n"; 
    getch();
    return 0;
  } 

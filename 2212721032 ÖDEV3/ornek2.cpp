#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
char *cp = "Teknoloji"; //  karakter iþaretçisi tanýmla ve "Teknoloji" baþlangýç adresine ata
cout << cp << endl; // cp'nin gösterdiði string yani Teknoloji yazdýr
cout << cp[0] << endl; // string'in ilk karakterini yazdýr
cout << cp[1] << endl; // string'in ikinci karakterini yazdýr
free(cp); // String statik bellek bölgesinde saklanýr ve free ile serbest býrakýlamaz ??

char *cpl; 
cpl = (char*) malloc(40); // 40 byte'lýk dinamik bellek ayýr ve adresi cpl'ye ata
if (!cpl) { cout << "Bellek tahsis hatasý!"; exit(1); } // ayrýlan belleðin baþarýlý olup olmadýðý kontrol et sonuç eðer Baþarýsýz ise hata mesajý ver ve programý sonlandýr
// cpl = "Bilgisayar"; // hata
//strcpy(cpl, "Bilgisayar"); // Doðru kullanýmý  strcpy fonksiyonu ile "Bilgisayar" string'i cpl'nin gösterdiði dinamik belleðe kopyala ??
strcpy(cpl,"Bilgisayar");
cout << cpl << endl; // gösterdiði stringi yazdýr
cout << cpl[0] << endl; //  gösterdiði string'in ilk karakterini yazdýr
cout << cpl[1] << endl; // string'in ikinci karakterini yazdýr
free(cpl); // malloc ile ayrýlan bellek bölgesi free ile serbest býrak
}
// çýktýda BÝLGÝSAYAR ýn çýktýsýný bu kod vermiyor 

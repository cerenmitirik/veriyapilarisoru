#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
int *ip; // iþaretçi ayrýlan bellek bölgesinin adresini tutsun
ip = new int; // int boyutunda dinamik bellek ayýr ve ayrýlan belleðin adresi ip iþaretçisine ata
if (!ip) { // bellek ayrýmý Baþarýsýz ise hata mesajý ver ve programý sonlanýr
    cout << "Bellek tahsis hatasý!";
    exit(1);
}
// ip = new int(21); // 22. satýr yerine bu kullaným ile int deðer büyüklüðünde bellek tahsis ederek bellek adresine 21 deðerini atar.

*ip = 21; // 20. satýr yerine iþaretçi yoluyla belleðe 21 deðerini atar.
cout << ip << " bellek adresindeki deðer: " << *ip; // Ayrýlan belleðin adresini ve deðerini yazdýr
delete ip; //serbest býrak	
}

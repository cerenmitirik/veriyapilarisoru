#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
    int gun_sayisi = 7;
    double* sicakliklar = new double[gun_sayisi];

    cout << gun_sayisi << " Gunluk hava sicakliklarini giriniz:\n";
    for (int i = 0; i < gun_sayisi; i++) {
        cout << i + 1 << ".gunun sicakligi:\n ";
        cin >> sicakliklar[i];
    }

    double min = sicakliklar[0];
    double max = sicakliklar[0];
    double toplam = 0;

    for (int i = 0; i < gun_sayisi; i++) {
        if(sicakliklar[i] < min){
		  min = sicakliklar[i];
		}
		 
        if(sicakliklar[i] > max) {
          max = sicakliklar[i];	
		}
        toplam += sicakliklar[i];
    }

    cout << "En Kucuk Sicaklik:\n"<<min<<"\n";
    cout << "En Buyuk Sicaklik:\n"<<max<<"\n";
    cout << "Ortalama Sicaklik:\n"<<(toplam/gun_sayisi);

    delete[] sicakliklar;

    return 0;
}


#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
int var; 
int *ptr; // i�aret�i tamsay� de�i�keninin adresini tutar
int **pptr; // i�aret�i tamsay� i�aret�isinin adresini tutar

var = 3000; 

/* var de�i�keninin adresini al�yoruz */
ptr = &var; // var de�i�keninin adresini ptr i�aret�isine ata 
/* & kullanarak ptr i�aret�isinin adresini al�yoruz */
pptr = &ptr; // ptr i�aret�isinin adresini pptr i�aret�isine ata

cout << "var degiskeninin degeri =" << var << endl; 
cout << "*ptr ile ulasilan deger =" << *ptr << endl; // ptr i�aret�isinin g�sterdi�i adresteki de�eri yazd�r
cout << "**pptr ile ulasilan deger =" << **pptr; // pptr i�aret�isinin g�sterdi�i adresteki i�aret�inin g�sterdi�i adresteki de�eri yazd�r
//[ ** operat�r�, i�aret�inin i�aret�isinin g�sterdi�i adresteki de�eri almak i�in kullan�l�r.]
}

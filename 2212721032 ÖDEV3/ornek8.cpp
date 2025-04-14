#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std; 
int main(){
int var; 
int *ptr; // işaretçi tamsayı değişkeninin adresini tutar
int **pptr; // işaretçi tamsayı işaretçisinin adresini tutar

var = 3000; 

/* var değişkeninin adresini alıyoruz */
ptr = &var; // var değişkeninin adresini ptr işaretçisine ata 
/* & kullanarak ptr işaretçisinin adresini alıyoruz */
pptr = &ptr; // ptr işaretçisinin adresini pptr işaretçisine ata

cout << "var degiskeninin degeri =" << var << endl; 
cout << "*ptr ile ulasilan deger =" << *ptr << endl; // ptr işaretçisinin gösterdiği adresteki değeri yazdır
cout << "**pptr ile ulasilan deger =" << **pptr; // pptr işaretçisinin gösterdiği adresteki işaretçinin gösterdiği adresteki değeri yazdır
//[ ** operatörü, işaretçinin işaretçisinin gösterdiği adresteki değeri almak için kullanılır.]
}

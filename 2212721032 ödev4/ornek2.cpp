#include <iostream>

using namespace std;

int main() {
    int sayi = 235;  // 235 sayısının ikilik gösterimi: 1110 1011
    
    // 235 sayısının 3. biti 1 midir?
    int bit3 = (sayi & (1 << 2)) ? 1 : 0; // 3. bit kontrolü
    cout << "3. bit 1 mi? " << (bit3 ? "Evet" : "Hayir") << endl;

    // 235 sayısının 4. biti 0 ise 1 yapınız
    if (!(sayi & (1 << 3))) {  // 4. bit 0 ise
        sayi |= (1 << 3);      // 4. biti 1 yap
    }
    cout << "4. bit 1 yapildiktan sonra yeni sayi: " << sayi << endl;

    // 235 sayısının 6. biti 1 midir?
    int bit6 = (sayi & (1 << 5)) ? 1 : 0; // 6. bit kontrolü
    cout << "6. bit 1 mi? " << (bit6 ? "Evet" : "Hayir") << endl;

    return 0;
}


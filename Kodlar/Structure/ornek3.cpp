#include <iostream>

using namespace std;
struct Mesafe {
    float metre;
    int santimetre;
};

struct Oda {
    Mesafe Uzunluk;
    Mesafe Genislik;
    Mesafe Alan;
};

int main() {

    Oda Yatak_Odasi;
    Yatak_Odasi.Genislik.metre = 5;
    Yatak_Odasi.Genislik.santimetre = 60;
    Yatak_Odasi.Uzunluk.metre = 3;
    Yatak_Odasi.Uzunluk.santimetre = 80;


    int Genislik = Yatak_Odasi.Genislik.metre * 100 + Yatak_Odasi.Genislik.santimetre;
    int Uzunluk = Yatak_Odasi.Uzunluk.metre * 100 + Yatak_Odasi.Uzunluk.santimetre;

    Yatak_Odasi.Alan.metre = 0;
    Yatak_Odasi.Alan.santimetre = Genislik * Uzunluk;

    while (Yatak_Odasi.Alan.santimetre >= 10000) {
        Yatak_Odasi.Alan.santimetre -= 10000;
        Yatak_Odasi.Alan.metre++;
    }
    cout << "Toplam alan: " << Yatak_Odasi.Alan.metre << "." << Yatak_Odasi.Alan.santimetre << " metrekare" << endl;
    return 0;
}

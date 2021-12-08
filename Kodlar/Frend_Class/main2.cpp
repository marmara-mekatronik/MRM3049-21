#include <iostream>

using namespace std;

class Dikdortgen;

class Kare {
public:
    Kare(int a);

    friend class Dikdortgen;

private:
    int kenar;
};

class Dikdortgen {
private:
    int genislik, yukseklik;
public:
    void setKenarlar(int gen, int yuk);

    int alan();

    void cevir(Kare &a);
};

Kare::Kare(int a) {
    kenar = a;
}

void Dikdortgen::setKenarlar(int gen, int yuk) {
    genislik = gen;
    yukseklik = yuk;
}

int Dikdortgen::alan() {
    return genislik * yukseklik;
}

void Dikdortgen::cevir(Kare &a) {
    genislik = a.kenar;
    yukseklik = a.kenar;
}

int main() {
    Dikdortgen dikdortgen1;
    dikdortgen1.setKenarlar(15,20);
    cout << "Dikdortgenin Alanı: " << dikdortgen1.alan() << endl;

    Kare kare1(50);
    dikdortgen1.cevir(kare1);
    cout << "Dikdortgenin Alanı: " << dikdortgen1.alan() << endl;

    return 0;
}

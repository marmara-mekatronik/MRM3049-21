#include <iostream>

using namespace std;
struct Tarih {
    int gun, ay, yil;
};
void yazdir(Tarih dd);
Tarih isle(int gun,int ay,int yil);

int main() {
    Tarih DogumTarihi;
    DogumTarihi = isle(23,10,1989);
    yazdir(DogumTarihi);

        
    return 0;
}

void yazdir(Tarih dd) {
    cout << "\n gun/ay/yil(" << dd.gun;
    cout << "/" << dd.ay;
    cout << "/" << dd.yil << ")" << endl;
}

Tarih isle(int gun,int ay,int yil)
{
 Tarih DogumTarihi;
 DogumTarihi.gun= gun;
 DogumTarihi.ay=ay;
 DogumTarihi.yil=yil;
 return DogumTarihi;
}

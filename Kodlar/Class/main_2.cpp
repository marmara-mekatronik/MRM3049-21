#include <iostream>

using namespace std;

class Tarih {
private:
    int Gun;
    int Ay;
    int Yil;
public:
    int gun() { return Gun; }

    int ay() { return Ay; }

    int yil() { return Yil; }

    bool ayarla(int g, int a, int y);
};

bool Tarih::ayarla(int g, int a, int y) {
    if ((g < 0) || (g > 31)) return false;
    if ((a < 0) || (a > 12)) return false;
    if ((y < 0) || (y > 9999)) return false;
    Gun = g;
    Ay = a;
    Yil = y;
    return true;
}

int main() {

    Tarih bayram;
    Tarih tatiller[5];
    Tarih *birgun;

    birgun = &bayram;

    bayram.ayarla(29, 10, 2021);
    cout << "Gun : " << bayram.gun() << endl;
    cout << "Ay : " << bayram.ay() << endl;
    cout << "Yil : " << bayram.yil() << endl;
    cout << bayram.gun() << "/" << bayram.ay() << "/" << bayram.yil() << endl;

    cout << "------------------" << endl;

    tatiller[0].ayarla(01, 01, 2022);
    cout << "Tatil :";
    cout << tatiller[0].gun() << "/" << tatiller[0].ay() << "/" << tatiller[0].yil() << endl;

    birgun->ayarla(23, 04, 2022);
    cout << "Bayram :";
    cout << birgun->gun() << "/" << birgun->ay() << "/" << birgun->yil() << endl;

    return 0;
}

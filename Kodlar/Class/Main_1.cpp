#include <iostream>

using namespace std;

class Bisiklet {
protected:
    bool elektrikli_mi=false;
private:
    int hiz = 0;
    int vites = 1;

public:
    void VitesDegistir(int yeniDeger) {
        vites = yeniDeger;
    }
    void Hizlan(int artis) {
        hiz = hiz + artis;;
    }
    void FrenYap(int azalma) {
        hiz = hiz - azalma;
    }
    void BilgileriYaz() {
        cout << "Vites : " << vites << endl;
        cout << "Hiz :" << hiz << endl;
    }

};


int main() {
    int sayac;

    Bisiklet b;
    b.BilgileriYaz();
    b.Hizlan(10);
    b.VitesDegistir(4);
    b.BilgileriYaz();
    b.FrenYap(5);
    b.BilgileriYaz();


    return 0;
}

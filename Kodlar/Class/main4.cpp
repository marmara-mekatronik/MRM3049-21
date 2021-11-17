#include <iostream>

using namespace std;

class Kutu{
private:
    double derinlik;
    double genislik;
    double yukseklik;
public:
    void setDerinlik(){
        cout << "Derinligi Giriniz:";
        cin >> derinlik ;
    }
    void setGenislik(){
        cout << "Genisligi Giriniz:";
        cin >> genislik ;
    }
    void setYukseklik(){
        cout << "Yuksekligi Giriniz:";
        cin >> yukseklik ;
    }
    double getDerinlik(){
        return derinlik;
    }
    double getGenislik(){
        return genislik;
    }
    double getYukseklik(){
        return yukseklik;
    }

    double HacimHesapla(){
        return derinlik*genislik*yukseklik;
    }
};

int main() {


    Kutu kutu_1;
    kutu_1.setDerinlik();
    kutu_1.setGenislik();
    kutu_1.setYukseklik();
    cout << "Kutunun Derinligi :" << kutu_1.getDerinlik() << endl;
    cout << "Kutunun Genisligi :" << kutu_1.getGenislik() << endl;
    cout << "Kutunun Yuksekligi :" << kutu_1.getYukseklik() << endl;
    cout << "Kutunun Hacmi :" << kutu_1.HacimHesapla() << endl;

    return 0;
}

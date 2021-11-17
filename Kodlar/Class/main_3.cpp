#include <iostream>

using namespace std;

class Kutu{
private:
    double derinlik;
    double genislik;
    double yukseklik;
public:
    void setDerinlik(double d){
        derinlik = d;
    }
    void setGenislik(double g){
        genislik = g;
    }
    void setYukseklik(double y){
        yukseklik = y;
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
    kutu_1.setYukseklik(25.22);
    kutu_1.setDerinlik(22.50);
    kutu_1.setGenislik(10.55);
    cout << "Kutunun Derinligi :" << kutu_1.getDerinlik() << endl;
    cout << "Kutunun Genisligi :" << kutu_1.getGenislik() << endl;
    cout << "Kutunun Yuksekligi :" << kutu_1.getYukseklik() << endl;
    cout << "Kutunun Hacmi :" << kutu_1.HacimHesapla() << endl;

    return 0;
}

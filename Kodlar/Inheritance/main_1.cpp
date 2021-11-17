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

class KargoKutusu:public Kutu{
public:
    void setKime(string K){
        Kime=K;
    }
    string getKime(){
        return Kime;
    }

private:
    string Kime="NULL";
};

int main() {

KargoKutusu kKutu_1;
kKutu_1.setKime("Ahmet");
kKutu_1.setDerinlik();
kKutu_1.setGenislik();
kKutu_1.setYukseklik();
cout << "Kargo Bilgileri" << endl;
cout << "Alici :" << kKutu_1.getKime() << endl;
cout << "Kargo Kutusu Hacmi : " << kKutu_1.HacimHesapla() << endl;

return 0;
}

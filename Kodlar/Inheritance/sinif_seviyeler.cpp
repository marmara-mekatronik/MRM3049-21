#include <iostream>

using namespace std;

class Tasit{
public:
    Tasit(){
        cout << "Bu bir Tasittir...."<< endl;
    }
};

class Otomobil: public Tasit{
public:
    Otomobil(){
        cout << "tum otomobiller tasittir..." <<endl;
    }
};

class Otobus: public Tasit{
public:
    Otobus(){
        cout << "tum otobusler tasittir..." <<endl;
    }
};

class BenzinliOtomobil: public Otomobil{
public:
    BenzinliOtomobil(){
        cout << "Benzinli otomobiller otomobildir..." <<endl;
    }
};

class DizelOtomobil: public Otomobil{
public:
    DizelOtomobil(){
        cout << "Benzinli otomobiller otomobildir..." <<endl;
    }
};

int main() {
  Otomobil oto;


    return 0;
}

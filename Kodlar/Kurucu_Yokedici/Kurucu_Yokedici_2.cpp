#include <iostream>

using namespace std;

class Nokta {
private:
    int x, y;

public:
    Nokta(int x1, int y1) {
        cout<<"----------------------------" << endl;
        if(x1<0)
            x=0;
        else
            x=x1;
        if(y<0)
            y=0;
        else
            y=y1;
    }


    Nokta():x(0),y(0) {
        cout<<"Kurucu fonksiyon calisiyor..." << endl;
    }

    ~Nokta(){};

    void setKoordinat(int x1, int y1) {
        x = x1;
        y = y1;
    }

    void gosterKoordinat() {
        cout << "X Koordinatı :" << x << "\nY Koordinatı :" << y << endl;
    }
};


int main() {
    Nokta nokta1(-22, 55);
    nokta1.gosterKoordinat();
    Nokta dizi[]={Nokta(30,40),Nokta(50,60),{70,80}};
    dizi[2].gosterKoordinat();
    Nokta nokta2;
    nokta2 = nokta1;
    nokta2.gosterKoordinat();
    return 0;
}

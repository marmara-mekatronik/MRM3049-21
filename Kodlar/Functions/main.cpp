#include <iostream>
#include <math.h>
using namespace std;

float fsin(float, float);
void ciz(float);

int main() {
float y=0.0;
    for (int i = 0; i <= 360; i=i+18) {
        y= fsin(9,i);
        ciz(y);
    }

    return 0;
}

float fsin(float x, float aci){
    float sonuc;
    aci=aci*3.141618/180;
     sonuc = x*sin(aci);
    return sonuc;
}

void ciz(float c){
int adet;
if (c<0.0){
    adet=(int)fabs(c);
    adet=10-adet;
    for (int i = 1; i < adet; ++i) {
        cout << " " ;
    }
    for (int j = adet; j <= 10; ++j) {
        cout << "*";
    }
    cout<<"\n";
} else{
    adet=(int)c;
    for (int x = 1; x < 11; ++x) {
        cout << " " ;
    }
    for (int y = 11; y <= 11+adet; ++y) {
        cout << "*";
    }
cout<<"\n";

}

}

// F(x)=Asin(x)

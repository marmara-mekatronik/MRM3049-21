#include <iostream>

using namespace std;

struct parca {
    int model_numarasi;
    int parca_numarasi;
    float fiyat;
};

int main() {

    parca parca1;

    parca1.model_numarasi = 6244;
    parca1.parca_numarasi = 373;
    parca1.fiyat = 217.55F;

    cout << "Model :" << parca1.model_numarasi;
    cout << ", Parca  : " << parca1.parca_numarasi;
    cout << ", Fiyat (TL): " << parca1.fiyat << endl;

    parca parca2 = {5657, 865, 388.75F};

    cout << "Model :" << parca2.model_numarasi;
    cout << ", Parca  : " << parca2.parca_numarasi;
    cout << ", Fiyat (TL): " << parca2.fiyat << endl;

    parca parca3;

    parca3 = parca1;
    cout << "Model :" << parca3.model_numarasi;
    cout << ", Parca  : " << parca3.parca_numarasi;
    cout << ", Fiyat (TL): " << parca3.fiyat << endl;

    return 0;
}

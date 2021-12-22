#include <iostream>

using namespace std;

class agirlik {
private:
    int kilo;
    float gram;;
public:
    void setDeger();

    void getDeger();

    agirlik() : kilo(0), gram(0.0) {}

    agirlik(float ag) {
        kilo = (int) ag;
        gram = 1000 * (ag - kilo);
    }

    agirlik(int k, float g) : kilo(k), gram(g) {}
};

void agirlik::setDeger() {
    cout << "\n kilo gir  :";
    cin >> kilo;
    cout << "\n gram gir  :";
    cin >> gram;
}

void agirlik::getDeger() {
    cout << kilo << " kilo " << gram << " gram dır" << endl;
}


int main() {
    agirlik *ap;
    ap = new agirlik;
    ap->setDeger();
    cout << "\n -----> agirlik nesnesi icin<------\n";
    ap->getDeger();

    cout << sizeof(agirlik) << endl;

    delete ap;

    return 0;
}

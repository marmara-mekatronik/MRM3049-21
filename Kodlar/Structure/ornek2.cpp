#include <iostream>

using namespace std;
struct Mesafe {
    float metre;
    int Santimetre;
};

int main() {
    Mesafe U1, U3;
    Mesafe U2 = {11, 60};

    cout << "\n Metreyi giriniz:";
    cin >> U1.metre;
    cout << "\n Santimetreyi giriniz:";
    cin >> U1.Santimetre;

    U3.metre = U1.metre + U2.metre;
    U3.Santimetre = U1.Santimetre + U2.Santimetre;
    if (U3.Santimetre >= 100) {
        U3.Santimetre -= 100;
        U3.metre++;
    }
    cout << "U1 Metre :" << U1.metre;
    cout << ", U1 Santimetre :" << U1.Santimetre << endl;

    cout << "U2 Metre :" << U2.metre;
    cout << ", U2 Santimetre :" << U2.Santimetre << endl;

    cout << "U1 Metre :" << U3.metre;
    cout << ", U1 Santimetre :" << U3.Santimetre << endl;

    return 0;
}

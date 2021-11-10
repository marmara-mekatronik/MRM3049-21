#include <iostream>

using namespace std;

void tekrar_char(char ch, int n);

int main() {
    char ch_gir;
    int n_tekrar;
    cout << "Bir karakter giriniz :";
    cin >> ch_gir;
    cout << "Tekrar sayisini giriniz:";
    cin >> n_tekrar;
    tekrar_char(ch_gir,n_tekrar);
    return 0;
}

void tekrar_char(char ch, int n) {
    for (int i = 0; i < n; ++i) {
        cout << ch ;
     }
}


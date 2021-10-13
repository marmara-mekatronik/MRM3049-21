#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // a = 5 (00000101)
    // b = 9 (00001001)
   int a = 5, b = 9;

    // bitwise AND
    cout << "a= " << a << "\t" << "b= " << b << endl;
    cout << "a & b =" << (a & b) << endl;
    // sonuc (00000001)

    //bitwise OR
    cout << "a | b =" << (a | b) << endl;
    // sonuc (00001101)

    //bitwise XOR
    cout << "a ^ b =" << (a ^ b) << endl;
    // sonuc (00001100)

    //bitwise LEFT SHIFT <<
    cout << "b << 1" << " = " << (b<<1) << endl;
    // b = 9 (00001001)  << (00010010)

    //bitwise RIGHT SHIFT <<
    cout << "b >> 1" << " = " << (b>>1) << endl;
    // b = 9 (00001001)  << (10000100)

    //bitwise RIGHT SHIFT <<
    cout << "b >> 2" << " = " << (b>>2) << endl;
    // b = 9 (00001001)  << (01000010)

    //bitwise NOT (~)
    cout << "~(" << a << ") =" << (~a) << endl;
   // sonuc (11111010)

    return 0;

}

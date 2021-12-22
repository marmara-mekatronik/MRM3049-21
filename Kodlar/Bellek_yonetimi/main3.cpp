#include <iostream>

using namespace std;
class Ogrenci{
private:
    int yas;
public:
    Ogrenci():yas(22){}
    void Goster(){
        cout << "YAS :" << yas << endl;
    }
};

int main() {
    // Ogrenci ogr1;
    // ogr1.Goster();
    Ogrenci *ptr = new Ogrenci();
    ptr->Goster();
    delete ptr;
    return 0;
}

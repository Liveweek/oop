#include <iostream>
#include <string>
using namespace std;

class Tiles {
    public:
        string brand;
        int size_h;
        int size_w;
        int price;
        void getData() {
            cout << "=======================" << endl;
            cout << "Брэнд: " << '\t' << brand << endl;
            cout << "Длина: " << '\t' << size_h << endl;
            cout << "Ширина: " << '\t' << size_w << endl;
            cout << "Цена: " << '\t' << price << endl;
            cout << "=======================" << endl;
        };
};

int main() {
    Tiles t1,t2;
    t1.brand = "Ёлочка";
    t1.size_h = 12;
    t1.size_w = 10;
    t1.price = 200;
    t2.brand = "Дубочек";
    t2.size_h = 40;
    t2.size_w = 25;
    t2.price = 350;
    t1.getData();
    t2.getData();
    return 0;
}
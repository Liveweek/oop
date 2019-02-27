#include <iostream>
#include <string>
using namespace std;

class Tiles {
    public:
        string brand;
        int size_h;
        int size_w;
        int price;
        Tiles(string b, int h, int w, int p) {
            brand = b;
            size_h = h;
            size_w = w;
            price = p;
        };
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
    Tiles t1((string)"Ёлочка", 12,10,200),t2((string)"Дубочёк", 40,25,350);
    t1.getData();
    t2.getData();
    return 0;
}
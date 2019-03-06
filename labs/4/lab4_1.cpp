#include <iostream>
#include <cmath>
using namespace std;

class Complex {
    private:
        float re;
        float im;
    public:
        Complex(float a, float b) {
            re = a;
            im = b;
        };

        float get_abs() {
            return sqrt(pow(re,2)+pow(im,2));
        };
        
        float getData() {
            cout << "Комплексное число: "<< endl;
            cout << "Действительная часть: " << re << endl;
            cout << "Мнимая часть: " << im << endl;
            cout << "Модуль числа: " << this->get_abs() << endl << endl;
        };
};

int main() {
    Complex z1(5,2.2),z2(2,4.5);
    z1.getData();
    z2.getData();
    return 0;
}
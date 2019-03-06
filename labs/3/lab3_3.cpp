#include <iostream>
#include <cmath>
using namespace std;

class Complex {
    private:
        float re;
        float im;
    public:
        void set_value(float a, float b) {
            this -> re = a;
            this -> im = b;
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

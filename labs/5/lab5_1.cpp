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

        Complex& operator= (Complex& value) {
            this->im = value.im;
            this->re = value.re;
            return *this;
        };

        Complex& operator++ () {
            this->re += 1;
            this->im += 1;
            return *this;
        };

        Complex& operator-- () {
            this->re -= 1;
            this->im -= 1;
            return *this;
        };

        friend bool operator==(const Complex& left, const Complex& right) {
            bool isReal = left.re == right.re;
            bool isImage = left.im == right.im;
            return isReal && isImage;            
        };

        friend ostream& operator<<(ostream &out, const Complex& value) {
            out << "Complex number: " << value.re << " + i * " << value.im << endl;
            return out; 
        };
        
        friend istream& operator>>(istream &in, const Complex &number) {
            in >> number.re >> number.im;
            return in;
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
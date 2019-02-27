#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

class Complex {
    public:
        float real;
        float imagine;
};

Complex summa(Complex a, Complex b);//возвращает сумму двух комплексных чисел
Complex raz(Complex a, Complex b);//возвращает разность двух комплексных чисел
Complex umn(Complex a, Complex b);//возвращает произведение двух комплексных чисел
Complex delen(Complex a, Complex b);//возвращает частное двух комплексных чисел
float abs(Complex a);//модуль комплексного числа

#endif // COMPLEX_H


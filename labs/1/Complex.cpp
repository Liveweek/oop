#include "Complex.h"

Complex summa(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imagine = a.imagine + b.imagine;
    return result;
};

Complex raz(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imagine = a.imagine - b.imagine;
    return result;
}

Complex umn(Complex a, Complex b) {
    Complex result;
    result.real = a.real*b.real - a.imagine*b.imagine;
    result.imagine = a.real * b.imagine + b.real * a.imagine;
    return result;
};

Complex delen(Complex a, Complex b) {
    Complex result;
    result.real = (a.real*b.real + a.imagine*b.imagine)/(pow(b.real,2) + pow(b.imagine,2));
    result.imagine = (b.real * a.imagine - a.real * b.imagine)/(pow(b.real,2)+pow(b.imagine,2));
    return result;
}

float abs(Complex a) {
    return sqrt(pow(a.real,2) + pow(a.imagine,2));
}
#include <iostream>
#include <math.h>
using namespace std;

class Function {
    public:
        virtual void print_f() = 0;
        virtual float result(float x) = 0;
        virtual void dx() = 0;
        virtual Function* copy() = 0;
};

class Constanta: public Function {
    public:
        void print_f() {
            cout << "f(x) = const" << endl;
        }
        float result(float x) override{
            return 69;
        }
        void dx() {
            cout << "f'(x) = 0" << endl;
        }
        Function* copy() override {
            Function* f = new Constanta;
            return f;
        }
};

class Value : public Function {
    public:
        void print_f() {
            cout << "f(x) = x" << endl;
        }
        float result(float x) override{
            return x;
        }
        void dx() {
            cout << "f'(x) = 1" << endl;
        }
        Function* copy() override {
            Function* f = new Value;
            return f;
        }
};

class Summa: public Function {
    public:
        void print_f() {
            cout << "f(x) = x^2 + x" << endl;
        }
        float result(float x) override{
            return x*x + x;
        }
        void dx() {
            cout << "f'(x) = 2*x + 1";
        }
        Function* copy() override {
            Function* f = new Summa;
            return f;
        }
};

class Raznost: public Function {
    public:
        void print_f() {
            cout << "f(x) = 3x - x^3" << endl;
        }
        float result(float x) override{
            return 3*x - pow(x,3);
        }
        void dx() {
            cout << "f'(x) = 3 - 3*x^2" << endl;
        }
        Function* copy() override {
            Function* f = new Raznost;
            return f;
        }
};

class Proiz : public Function {
    public :
        void print_f() {
            cout << "f(x) = (3x - 1) * x^2" << endl;
        }
        float result(float x) override{
            return (3*x - 1) * x * x;
        }
        void dx() {
            cout << "f'(x) = 3x^2 + (3x - 1) * 2x" << endl;
        }
        Function* copy() override {
            Function* f = new Proiz;
            return f;
        }
};

class Chastnoe : public Function {
    public:
        void print_f() {
            cout  << "f(x) = (4x^2 - 5)/(3x + 7)" << endl;
        }
        float result(float x) override{
            return (4*x*x - 5)/(3*x + 7);
        }
        void dx() {
            cout << "f'(x) = (8x(3x + 7) - 3(4x^2 - 5))/(3x + 7)^2" << endl;
        }
        Function* copy() override {
            Function* f = new Chastnoe;
            return f;
        }
};

class Sinus : public Function {
    public :
        void print_f() {
            cout << "f(x) = sin(x)" << endl;
        }
        float result(float x) override{
            return sin(x);
        }
        void dx() {
            cout << "f'(x) = cos(x)" << endl;
        }
        Function* copy() override {
            Function* f = new Sinus;
            return f;
        }
};

class Cosinus : public Function {
    public:
        void print_f() {
            cout << "f(x) = cos(x)" << endl;
        }
        float result(float x) override{
            return cos(x);
        }
        void dx() {
            cout << "f'(x) = - sin(x)" << endl;
        }
        Function* copy() override {
            Function* f = new Cosinus;
            return f;
        }
};

class Expo : public Function {
    public: 
        void print_f() {
            cout << "f(x) = exp(x)" << endl;
        }
        float result(float x) override{
            return exp(x);
        }
        void dx() {
            cout << "f'(x) = exp(x)" << endl;
        }
        Function* copy() override {
            Function* f = new Expo;
            return f;
        }
};

class LogN: public Function {
    public:
        void print_f() {
            cout << "f(x) = ln(x)" << endl;
        }
        float result(float x) override{
            return log(x);
        }
        void dx() {
            cout << "f'(x) = 1/x" << endl;
        }
        Function* copy() override {
            Function* f = new LogN;
            return f;
        }
};

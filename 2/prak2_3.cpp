#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float a,b,y,t;
    a = 4.6;
    b = 1.5;
    if (a <= b) {
        y = (a-b)/(a+b)*(a+b)/(pow(a,2) - a*b + pow(b,2));
    } else {
        y = a + log(pow(b,2));
    }
    if (y < b) {
        t = pow(sin(y),2) + float(1)/tan(a-b);
    } else if (y == b) {
        t = (2*y + sqrt(pow(y,2) - a))/(2*b - sqrt(pow(a,2)-y));
    } else {
        t = pow(y * sin(a),float(1)/3) + float(1)/sqrt(y*cos(b));
    }
    if ((isnan(y)) || (isnan(t))) {
        cout<<"Ошибка в вычислениях"<< endl;
    } else {
        cout << "a = " << a << '\n' << "b = " << b << '\n' << "y = " << y << '\n' << "t = " << t << '\n';
    }
    return 0;
}
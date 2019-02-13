#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float a,x,y,t;
    a = 3.5;
    x = -0.7;
    if (a <= x) {
        y = a + log(x + a);
    } else {
        y = sqrt(sin(a*x));
    }
    if (a < y) {
        t = tan(a*x) + cos(2*a*y);
    } else if (a == y) {
        t = y/(a-x) + (a + x)/pow(y,2);
    } else {
        t = y /(a - x);
    }
    cout << "a = " << a << '\n' << "x = " << x << '\n' << "y = " << y << '\n' << "t = " << t << '\n';
    return 0;
}
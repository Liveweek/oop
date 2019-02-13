#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float a,b,z,t;
    a = -0.6;
    b = 5.3;
    if (a < b) {
        z = sqrt(abs(pow(a,2)-pow(b,2)));
    } else {
        z = 1 - 2*cos(a)*sin(b);
    }
    if (z < b) {
        t = pow(z + pow(a,2)*b,float(1)/3);
    } else if (z == b) {
        t = 1 - log10(z) + cos(pow(a,2)*b);
    } else {
        t = float(1)/cos(z*a);
    }
    cout << "a = " << a << '\n' << "b = " << b << '\n' << "z = " << z << '\n' << "t = " << t << '\n';
    return 0;
}
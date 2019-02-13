#include <iostream>
using namespace std;
struct Auto {
    int year;
    string mark;
    string model;
    int weight;
};


int main () {
    Auto my_auto1 = {
        2001,
        (string)"Nissan",
        (string)"GT-R",
        10000
    };
    Auto my_auto2 = {
        2005,
        (string)"Mazda",
        (string)"CX-5",
        11000
    };
}
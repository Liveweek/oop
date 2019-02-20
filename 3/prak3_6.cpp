#include <iostream>

struct Point {
    float x;
    float y;
};

struct Vector {
    Point p1;
    Point p2;
};

int main() {
    Vector vec = {{1.0,2.25},{-0.24,2.125}};
    return 0;
}
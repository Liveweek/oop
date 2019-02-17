class Shape {
    protected:
        int count_of_points;
};

class Quadrangle: public Shape {
    public:
        Quadrangle() {
            count_of_points = 4;
        }
};

class Rhombus : public Quadrangle {
    public:
        int side;
        int angle_a;
        int angle_b;
        Rhombus(int s, int a, int b) {
            side = s;
            angle_a = a;
            angle_b = b;
        }
};

class Square : public Quadrangle {
    public:
        int side;
        int angle = 90;
        Square(int s) {
            side = s;
        } 
}

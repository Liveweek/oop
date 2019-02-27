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

class Rectangle : public Quadrangle {
    public:
        int side_a, side_b;
        int angle = 90;
        Rectangle(int s1, int s2) {
            side_a = s1;
            side_b = s2;
        } 
}

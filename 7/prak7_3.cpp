class Transport {
    protected:
        int count_of_wheels;
        int count_of_passengers;
        float weigth;
};

class Car : public Transport {
    public:
        Car() {
            count_of_wheels = 4;
            count_of_passengers = 5;
            weigth = 3200;
        }
};

class Bus: public Transport {
    public:
        Bus() {
            count_of_wheels = 4;
            count_of_passengers = 20;
            weigth = 9800;
        }
};

class Bicycle : public Transport {
    public:
        Bicycle() {
            count_of_wheels = 2;
            count_of_passengers = 1;
            weigth = 15;
        }
}
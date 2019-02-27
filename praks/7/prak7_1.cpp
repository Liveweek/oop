#include <iostream>
using namespace std;

enum konech { WINGS, PAWS, BEAK, TAIL};

class Animal {
    public:
        string name;
        int size;
        int weight;
        konech feature;
        virtual void make_sound() = 0;
};

class Cat : public Animal {
    public:
        konech bonus_feature = TAIL;
        konech feature = PAWS;
        Cat( int s, int w, konech k, string nam) {
            name = nam;
            size = s;
            weight = w;
            feature = k;
        };
        void make_sound() {
            cout << "Meow" << endl;
        }
};

class Dog : public Animal {
    public:
        konech bonus_feature = TAIL;
        konech feature = PAWS;
        Dog( int s, int w, konech k, string nam) {
            name = nam;
            size = s;
            weight = w;
            feature = k;
        };
        void make_sound() {
            cout << "Woof" << endl;
        }
};

class Bird : public Animal {
    public:
        konech bonus_feature = BEAK;
        konech feature = WINGS;
        Bird( int s, int w, konech k,string nam) {
            name = nam;
            size = s;
            weight = w;
            feature = k;
        };
        void make_sound() {
            cout << "Cheeki Breeki" << endl;
        }
};


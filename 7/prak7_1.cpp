#include <iostream>
using namespace std;

enum konech { WINGS, PAWS, BEAK, TAIL};

string print_features(konech x) {
    switch (x)
    {
        case WINGS:
            return "крылья";
            break;
        case PAWS:
            return "лапы";
            break;
        case BEAK:
            return "клюв";
            break;
        case TAIL:
            return "хвост";
            break;
    }
}


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
        Bird( int s, int w, konech k,string nam) {                        name = nam;
            name = nam;
            size = s;
            weight = w;
            feature = k;
        };
        void make_sound() {
            cout << "Cheeki Breeki" << endl;
        }
};


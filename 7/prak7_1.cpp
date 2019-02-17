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

int main() {
    Dog dog(22,15,PAWS, (string)"Simon");
    Cat cat(20,10,PAWS, (string)"Aby");
    Bird bird(10,1,WINGS, (string)"Blue");
    cout << "Результат работы программы и наследования классов:" << endl;
    cout << "Собака по кличке " << dog.name << endl;
    cout << "Имеет размер " << dog.size << '\t' << " и вес " << dog.weight << endl;
    cout << "Из особенностей имеет " << print_features(dog.feature) << " и " << print_features(dog.bonus_feature) << endl;
    dog.make_sound();

    cout << "Кошка по кличке " << cat.name << endl;
    cout << "Имеет размер " << cat.size << '\t' << " и вес " << cat.weight << endl;
    cout << "Из особенностей имеет " << print_features(cat.feature) << " и " << print_features(cat.bonus_feature) << endl;
    cat.make_sound();

    cout << "Попугай по кличке " << bird.name << endl;
    cout << "Имеет размер " << bird.size << " и вес " << bird.weight << endl;
    cout << "Из особенностей имеет " << print_features(bird.feature) << " и " << print_features(bird.bonus_feature) << endl;
    bird.make_sound();
    return 0;
}
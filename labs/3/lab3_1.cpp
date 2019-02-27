#include <iostream>
#include <string>
using namespace std;

class Child {
    private:
        string name;
        string family;
        int age;
    public:
        int some;
        void set_value(string n, string f, int a) {
            this->age = a;
            this->name = n;
            this->family = f;
        };

        void print_value() {
            cout << "===================" << endl;
            cout << "Имя: " << name << endl;
            cout << "Фамилия: " << family << endl;
            cout << "Возраст: " << age << endl;
            cout << "===================" << endl;
        };
};

int main(int argc, char const *argv[])
{
    Child ch1,ch2;
    ch1.set_value((string)"Павел", (string)"Конаков", 18);
    ch2.set_value((string)"Марина", (string)"Казарян", 18);
    ch1.print_value();
    ch2.print_value();
    return 0;
}

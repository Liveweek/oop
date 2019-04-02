#include <iostream>
#include <string>
using namespace std;

class Human {
    protected:
        static int count;
        string name; //имя
        string surname; //фамилия
        string midname; //второе имя (?) отчество
        int age;
    public:
        Human() {
            count++;
            name = "Иван";
            surname = "Иванов";
            midname = "Иванович";
            age = 21;
        };

        Human(string name, string surname, string midname, int age) {
            count++;
            this->name = name;
            this->surname = surname;
            this->midname = midname;
            this->age = age;
        };

        virtual void print() = 0;

        virtual ~Human() { count--; };
};

class Student : public Human {
    private:
        bool on_lesson;
    public:
        Student() : Human() {
            on_lesson = true;
        };

        Student(string name, string surname, string midname, int age, bool on_l) : Human(name,surname,midname,age) {
            on_lesson = on_l;
        };

        void print() {
            cout << "Это Студент!" << endl;
            cout << "Имя: " << name << endl;
            cout << "Фамилия: " << surname << endl;
            cout << "Отчество: " << midname << endl;
            cout << "Возраст: " << age << endl;
            cout << "На уроке? ";
            cout << ((on_lesson) ? "Да" : "Нет") << endl;
        };

        ~Student() {};
};


class Boss: public Human {
    private:
        int number_of_workers;
    protected:
        Boss() : Human() {
            number_of_workers = 0;
        }

        Boss(string name, string surname, string midname, int age, int workers) : Human(name,surname,midname,age) {
            number_of_workers = workers;
        }

        void print() {
            cout << "Это начальник!" << endl;
            cout << "Имя: " << name << endl;
            cout << "Фамилия: " << surname << endl;
            cout << "Отчество: " << midname << endl;
            cout << "Возраст: " << age << endl;
            cout << "Количество рабочих: " << number_of_workers << endl;
        };

        ~Boss() { };
};
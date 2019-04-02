#include <iostream>
#include <vector>
#include "lab6_1.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    vector<Student> vec;
    int n;
    cout << "Введите количество студентов: ";
    cin >> n;
    string name, family, group;
    int age;
    int ocenki[5];
    for (int i = 0; i < n ; i++) {
        Student* stud;
        cout << "Введите имя и фамилию: ";
        cin >> stud->name >> stud->family;
        cout << "Группа: ";
        cin >> stud->group;
        cout << "Введите оценки студента через пробел:";
        for (int j = 0; j < 5; j++) {
            cin >> stud->notes[j];
        }
        vec.push_back(*stud);
    };
    return 0;
}


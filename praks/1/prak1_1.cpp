#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string name;
    cout << "Введите ваше имя:";
    cin >> name; //ввод имени в строковую переменную через поток ввода
    cout << "Привет, " << name << '\n'; //вывод данной строковой переменной через поток вывода
    return 0;
}

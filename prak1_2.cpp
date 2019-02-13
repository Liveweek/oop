#include <iostream>
using namespace std;

template <typename T>
T summ(T a, T b) {
    return a + b;
}

template <typename T>
T mins(T a, T b) {
    return a - b;
}

template <typename T>
void del(T a, T b) {
    if (b == 0) {
        cout << "Деление на ноль!" << '\n';
    } else {
        cout << "Деление равно " << float(a) / float (b) << '\n';
    }
}

template <typename T>
T umn(T a, T b) {
    return a * b;
}


int main(int argc, char const *argv[])
{
    float a,b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Сумма равна " << summ(a,b) << '\n';
    cout << "Разность равна " << mins(a,b) << '\n';
    del(a,b);
    cout << "Умножение равно "<< umn(a,b) << '\n';
    return 0;
}

#include <iostream>
#include <list>
#include "lab5_1.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    list<Complex> ls;
    int count;
    cout << "Введите количество хранимых комплексных чисел: ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        Complex input_number(0,0);
        cout << "Введите комлексное число (вводите через пробел сначала действительную, а потом мнимую части):";
        cin >> input_number;
        ls.push_back(input_number);
    }
    return 0;
}

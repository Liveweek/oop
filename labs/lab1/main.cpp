#include "Complex.h"

void print_menu() {
    system ("clear");
    cout << '\t' << "Действия над комплексными числами" << endl;
    cout << "1) Сложение" << endl;
    cout << "2) Вычитание" << endl;
    cout << "3) Умножение" << endl;
    cout << "4) Деление" << endl;
    cout << "5) Выход из программы" << endl;
};

int main(int argc, char const *argv[])
{
    Complex a,b;
    int answer;
    bool isExit = false;
    while (true) {
        char some;
        print_menu();
        switch (answer)
        {
            case 1:
                system("clear");
                cout << "Введите действительную и мнимую часть первого комплексного числа: ";
                cin >> a.real >> a.imagine;
                cout << "Введите действительную и мнимую часть второго комплексного числа: ";
                cin >> b.real >> b.imagine;
                Complex result = summa(a,b);
                cout << "Результат: "<< '\t' << result.real << " + i * " << result.imagine << endl;
                cin >> some;
                break;
            case 2:
                system("clear");
                cout << "Введите действительную и мнимую часть первого комплексного числа: ";
                cin >> a.real >> a.imagine;
                cout << "Введите действительную и мнимую часть второго комплексного числа: ";
                cin >> b.real >> b.imagine;
                Complex result = raz(a,b);
                cout << "Результат: "<< '\t' << result.real << " + i * " << result.imagine << endl;
                cin >> some;
                break;
            case 3:
                system("clear");
                cout << "Введите действительную и мнимую часть первого комплексного числа: ";
                cin >> a.real >> a.imagine;
                cout << "Введите действительную и мнимую часть второго комплексного числа: ";
                cin >> b.real >> b.imagine;
                Complex result = umn(a,b);
                cout << "Результат: "<< '\t' << result.real << " + i * " << result.imagine << endl;
                cin >> some;
                break;
            case 4:
                system("clear");
                cout << "Введите действительную и мнимую часть первого комплексного числа: ";
                cin >> a.real >> a.imagine;
                cout << "Введите действительную и мнимую часть второго комплексного числа: ";
                cin >> b.real >> b.imagine;
                Complex result = delen(a,b);
                cout << "Результат: "<< '\t' << result.real << " + i * " << result.imagine << endl;
                cin >> some;
                break;
            case 5:
                system("clear");
                cout << "Выход из программы..." << endl;
                isExit = true;
                cin >> some;
                break;
        }
        if (isExit) {
            break;
        }
    }
    return 0;
}

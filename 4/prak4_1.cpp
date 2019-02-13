#include <iostream>
#include <time.h>
using namespace std;

void print_menu() {
    cout << "1: Создать массив" << endl;
    cout << "2: Заполнить массив" << endl;
    cout << "3: Показать данные на экран" << endl;
    cout << "4: Удалить массив и очистить память" << endl;
    cout << "5: Выйти и программы" << endl;
}

int main() {
    srand(time(0));
    int length_array = 0;
    char some;
    double *array;
    bool isFool = false;
    bool isExit = false;
    while (true) {
        int answer;
        print_menu();
        cin >> answer;
        switch (answer) {
            case 1: 
                system("clear");
                if (length_array != 0) {
                    cout << "Ошибка! Перед тем как создать новый массив удалите его из памяти!" << endl;
                } else {
                    cout << "Введите длину массива: ";
                    cin >> length_array;
                    array = new double[length_array];
                    cout << "Массив длинной " << length_array << " был создан." << endl;
                }
                cin >> some;
                system("clear");//данная команда работает только на MacOS
                break;
            case 2:
                system("clear");
                if (length_array == 0) {
                    cout << "Невозможно заполнить массив, так как на него ещё не выделена память" << endl;
                } else {
                    cout << "Зполнить рандомно(0) или в ручную(1)?";
                    cin >> answer;
                    for (int i = 0; i < length_array; i++) {
                        if (answer) {
                            cout << "Элемент " << i << " массива: ";
                            cin >> array[i];
                        } else {
                            array[i] = float(rand()%1000 +1) /100;
                        }
                    }
                    cout << "Массив сформирован по значениям" << endl;
                    isFool = true;
                }
                cin >> some;
                system("clear");
                break;
            case 3:
                system("clear");
                if (length_array == 0) {
                    cout << "Ошибка! Невозможно вывести несуществующий массив. Перед этим проинициализируйте его." << endl;
                } else {
                    if (isFool) {
                        for (int i = 0; i < length_array; i++) {
                            cout << i << " --- " << array[i] << endl;;
                        }
                    } else {
                        cout << "Массив создан, однако его нужно заполнить значениями!" << endl;
                    }
                }
                cin >> some;
                system("clear");
                break;
            case 4:
                system("clear");
                if (length_array == 0) {
                    cout << "Вы пытаетесь удалить из памяти массив, который не существует. Перед этим создайте массив." << endl;
                } else {
                    delete [] array;
                    length_array = 0;
                    isFool = false;
                    cout << "Массив был удалён" << endl;
                }
                cin >> some;
                system("clear");
                break;
            case 5:
                system("clear");
                cout << "Выход из программы...";
                cin >> some;
                isExit = true;
                break;
        }
        if (isExit) {
            break;
        }
    }
}
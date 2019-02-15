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
double * s_memory(int * length_array);
double * s_value(double * array, int length_array, int result);
void print_array(double* array, int length_array, bool check);//вывод массива на кран
void remove(double* array, int *length, bool *check);//полное удаление массива из памяти (также обнуляются параметры массива)

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
                array = s_memory(&length_array);
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
                    array = s_value(array,length_array,answer);
                    cout << "Массив сформирован по значениям" << endl;
                    isFool = true;
                }
                cin >> some;
                system("clear");
                break;
            case 3:
                system("clear");
                print_array(array, length_array, isFool);
                cin >> some;
                system("clear");
                break;
            case 4:
                system("clear");
                remove(array, &length_array, &isFool);
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

double * s_memory(int *length_array) {
    if (*length_array != 0) {
        cout << "Ошибка! Перед тем как создать новый массив удалите его из памяти!" << endl;
    } else {
        cout << "Введите длину массива: ";
        cin >> *length_array;
        double *array = new double[*length_array];
        cout << "Массив длинной " << *length_array << " был создан." << endl;
        return array;
    }
}

double * s_value(double *array, int length_array, int result) {
    for (int i = 0; i < length_array; i++) {
        if (result) {
            cout << "Элемент " << i << " массива: ";
            cin >> array[i];
        } else {
            array[i] = double(rand()%1000 +1) /100;
        }
    }
    return array;
}

void print_array(double* array, int length_array, bool check) {
    if (length_array == 0) {
        cout << "Ошибка! Невозможно вывести несуществующий массив. Перед этим проинициализируйте его." << endl;
    } else {
        if (check) {
            for (int i = 0; i < length_array; i++) {
                cout << i << " --- " << array[i] << endl;;
            }
        } else {
            cout << "Массив создан, однако его нужно заполнить значениями!" << endl;
        }
    }
}

void remove(double* array, int *length, bool *check) {
    if (*length == 0) {
        cout << "Вы пытаетесь удалить из памяти массив, который не существует. Перед этим создайте массив." << endl;
    } else {
        delete [] array;
        array = NULL;
        *length = 0;
        *check = false;
        cout << "Массив был удалён" << endl;
    }
}
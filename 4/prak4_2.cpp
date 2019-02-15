#include <iostream>
#include <time.h>
using namespace std;


int * sw(int * array, int length) {
    for ( int i = 0; i < length - 1 ; i = i + 2) {
        int tmp;
        tmp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = tmp;
    }
    return array;
}

int main() {
    srand(time(0));
    int *array = new int[12];
    for (int i = 0; i < 12;i++) {
        array[i] = rand()%10 +1;
    }
    for (int i = 0; i < 12; i++) {
        cout << array[i] << '\t';
    }
    cout << endl;
    array = sw(array,12);
    for (int i = 0; i < 12; i++) {
        cout << array[i] << '\t';
    }
    cout << endl;
}
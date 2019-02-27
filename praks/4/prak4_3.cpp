#include <iostream>
#include <time.h>
using namespace std;

int ** random_m(int ** matr,int n, int m);//рандомное заполнение массива
void print_m(int ** matr, int n, int m);//вывод матрицы на экран

int main() {
    srand(time(0));
    int n,m;
    cout << "Введите количество строк и столбцов двумерного массива: ";
    cin >> n >> m;
    int **matrix = new int * [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
    }
    matrix = random_m(matrix,n,m);
    cout << "Получилась матрица: " << endl;
    print_m(matrix,n,m);
    return 0;
}

int ** random_m(int ** matr, int n, int m) {
    for (int i = 0;i < n;i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand()%50 + 10;
        }
    }
    return matr;
}

void print_m(int ** matr, int n , int m ) {
    for (int i = 0; i < n; i++) {
        for (int j = 0;j < m;j++) {
            cout << matr[i][j] << '\t';
        }
        cout << endl;
    }
}
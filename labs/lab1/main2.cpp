#include "Complex.h"

int main(int argc, char const *argv[])
{
    ifstream reading_file;
    reading_file.open("complex.txt");
    int count_of_complex_numbers;
    reading_file >> count_of_complex_numbers;
    Complex* array = new Complex[count_of_complex_numbers];
    for (int i = 0; i < count_of_complex_numbers; i++) {
        reading_file >> array[i].real;
        reading_file >> array[i].imagine;
    }
    reading_file.close();
    int max_index = 0;
    float max_value = abs(array[0]);
    for ( int i = 0; i < count_of_complex_numbers; i++ ) {
        if (max_value <= abs(array[i])) {
            max_index = i;
            max_value = abs(array[i]);
        }
    }
    cout << "Максимальное по модулю комплексное число имеет номер: " << max_index;
    delete[] array;
    array = NULL;
    return 0;
}

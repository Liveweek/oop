#include "prak3_3.cpp"
using namespace std;

struct library {
    int year;
    string adress;
    string status;
    Book books[100];
}

int main() {
    library lib = {
        1862,
        (string)"Москва, 125009",
        (string)"крупнейшая библиотека в России",
        {
            {
                1999,
                2000,
                (string)"Лолек и Болек",
                (string)"Какой-то важный человек"
            },
            {
                2001,
                300,
                (string)"Крутая книга",
                (string)"Автор ещё круче"
            },
            {
                2018,
                666,
                (string)"Казалось бы, к чему тут Сатана",
                (string)"Люцифер"
            }
        }
    };
    return 0;
}
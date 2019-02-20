#include <string>
#include <iostream>
using namespace std;

struct Book {
    int year;
    int count_of_pages;
    string name;
    string author;
};

int main() {
    Book book1 = {1999, 2000,(string)"Лолек и болек",(string)"Кто-то очень важный"};
    return 0;
}
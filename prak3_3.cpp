#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Book {
    public:
        string name;
        string author;
        int year;
        int count_of_pages;
        Book() {
            cin.get();
            cout << "Введите имя автора: " << '\n';
            getline(std::cin,author);
            cout << "Введите название книги: "<< '\n';
            getline(std::cin,name);
            cout << "Год: " << '\n';
            cin >> year;
            cout << "Кол-во страниц: " << '\n';
            cin >> count_of_pages;
        }
};

class Bibl {
    public:
        int year;
        int count_of_books;
        Book *books;
        Bibl () {
            cout << "Введите год основания: ";
            cin >> year;
            cout << "Введите количество книг в библиотеке: ";
            cin >> count_of_books;
            books = new Book[count_of_books];
        }
};

int main() {
    Book b1;
    Bibl biblio;
    cout << "Все книги библиотеки (" << biblio.count_of_books << "):";
    for (int i = 0; i < biblio.count_of_books; i++) {
        cout << biblio.books[i].author << '\n';
        cout << biblio.books[i].name << '\n';
        cout << "Год: " << biblio.books[i].year << '\n';
        cout << "Количество страниц: " << biblio.books[i].count_of_pages << '\n';
    }
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream creating_file;
    ifstream reading_file;
    reading_file.open("text.txt");
    if (reading_file.is_open()) {
        string s;
        while(!reading_file.eof()) {
            reading_file >> s;
            cout << s << endl;
        }
        reading_file.close();
    } else {
        cout << "Файл не найден, однако сейчас он создастся автоматичеки. Пожалуйста, запишите данные в файл и перезапустите программу." << endl;
        creating_file.open("text.txt",ios_base::trunc);
        creating_file.close();
    }
    return 0;
}
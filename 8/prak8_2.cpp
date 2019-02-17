#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream file;
    string s;
    cout << "Введите стручку текста с клавиатуры, которая будет записана в файл: "<< endl;
    getline(cin,s);
    file.open("text.txt", ios_base::trunc);
    file << s;
    file.close();
    return 0;
}
#include <iostream>
#include <string>
#include <set>
using namespace std;

string proiz(string a, string b) {
    multiset<char> str_a;
    multiset<char> str_b;
    for (int i = 0; i < b.size();i++) {
        str_b.insert(b[i]);
    }
    for (int i = 0; i < a.size(); i++) {
        if(!str_b.count(a[i])) {
            str_a.insert(a[i]);
            str_b.erase(a[i]);
        }
    }
    string s;
    for (auto e = str_a.begin(); e != str_a.end(); e++) {
        s.push_back(*e);
    }
    return s;
}

string proiz(char a, int b) {
    string s;
    for (int i = 0; i < b;i++) {
        s.push_back(a);
    }
    return s;
}

string proiz(string a, int b) {
    string s;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a.size();j++) {
            s.push_back(a[j]);
        }
    }
    return s;
}

string mins(string a, string b) {
    string s;
    multiset<char> str_a;
    multiset<char> str_b;
    for (int i = 0; i < a.size();i++) {
        str_a.insert(a[i]);
    }
    for (int i = 0; i < b.size();i++) {
        str_b.insert(b[i]);
    }
    for (int i = 0; i < a.size(); i++ ) {
        if (!str_b.count(a[i])) {
            str_b.erase(a[i]);
            str_a.erase(a[i]);
        }
    }
    for (auto e = str_a.begin(); e != str_a.end(); e++) {
        s.push_back(*e);
    }
    return s;
}

string summ(string a, string b) {
    return a + b;
}

string summ(char a, char b) {
    string s;
    s.push_back(a);
    s.push_back(b);
    return s;
}



template <typename T>
T summ(T a, T b) {
    return a + b;
}

template <typename T>
T mins(T a, T b) {
    return a - b;
}

template <typename T>
T proiz(T a, T b) {
    return a * b;
}

template <typename T>
T del(T a,T b) {
    if (!b) {
        cout << "Невозможно посчитать :(" << endl;
        return NULL;
    } else {
        return a / b;
    }
}


int main() {
    //интовые переменные
    int int_a = 4;
    int int_b = 2;

    //переменные float
    float f_a = 5;
    float f_b = 2;

    //переменные double
    double d_a = 7;
    double d_b = 1.5;

    //переменные char
    char ch_a = 'd';
    char ch_b = 'P';

    //переменные string
    string str_a = "aabbss";
    string str_b = "bbccaa";

    cout << "int: " << '\t' << int_a << '\t' << int_b << endl;
    cout << "===============" << endl;
    cout << "сумма: " << '\t' << summ(int_a,int_b) << endl;
    cout << "разность: " << '\t' << mins(int_a,int_b) << endl;
    cout << "произведение: " << '\t' << proiz(int_a,int_b) << endl;
    // cout << "деление: " << '\t' << del(int_a,int_b) << endl;
    cout << "===============" << endl << endl<<endl;
    cout << "float: " << '\t' << f_a << '\t' << f_b << endl;
    cout << "===============" << endl;
    cout << "сумма: " << '\t' << summ(f_a,f_b) << endl;
    cout << "разность: " << '\t' << mins(f_a,f_b) << endl;
    cout << "произведение: " << '\t' << proiz(f_a,f_b) << endl;
    // cout << "деление: " << '\t' << del(f_a,f_b) << endl;
    cout << "===============" << endl << endl<<endl;
    cout << "double: " << '\t' << d_a << '\t' << d_b << endl;
    cout << "===============" << endl;
    cout << "сумма: " << '\t' << summ(d_a,d_b) << endl;
    cout << "разность: " << '\t' << mins(d_a,d_b) << endl;
    cout << "произведение: " << '\t' << proiz(d_a,d_b) << endl;
    // cout << "деление: " << '\t' << del(d_a,d_b) << endl;
    cout << "===============" << endl << endl<<endl;
    cout << "char: " << '\t' << ch_a << '\t' << ch_b << endl;
    cout << "===============" << endl;
    cout << "сумма: " << '\t' << summ(ch_a,ch_b) << endl;
    cout << "произведение: " << '\t' << ch_a << " на целое число "<< int_a<<'\t'<<proiz(ch_a,int_a) << endl;
    cout << "===============" << endl << endl<<endl;
    cout << "string: " << '\t' << str_a << '\t' << str_b << endl;
    cout << "===============" << endl;
    cout << "сумма: " << '\t' << summ(str_a,str_b) << endl;
    cout << "разность: "<< '\t' << mins(str_a,str_b) << endl;
    cout << "произведение строки "<< '\t'<< str_a<<" на целое число "<< int_a << '\t' << proiz(str_a,int_a);
    cout << "произведение (пересечение множеств): " << '\t' << proiz(str_a,str_b) << endl;
    cout << "===============" << endl << endl<<endl;


}
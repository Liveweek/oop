#include <iostream>

using namespace std;
struct Group {
    string id;
    int year;
    string students[40];
};

int main(int argc, char const *argv[])
{
    Group my_group = {
        (string)"ИНБО-03",
        2018,
        {
            (string)"Яровиков Анатолий",
            (string)"Конаков Павел",
            (string)"Ефремова Светлана"
        }
    };
    return 0;
}

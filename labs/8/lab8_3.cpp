#include <iostream>
#include <queue>

using namespace std;

class Car {
    public:
        string mark; // марка автомобиля
        string number; // регистрационный номер
        string owner; // владелец авто
        //конструктор класса машины
        Car(string m, string n, string o) {
            mark = m;
            number = n;
            owner = o;
        }
};

int main(int argc, char const *argv[])
{
    queue<Car> q;
    const int HOURS = 20; //количество рабочих часов
    //концепция программы:
    //Цикл проходит по рабочим часам мойки, спрашивает, сколько заезжает в этот час машин на мойку
    //Если машины есть, то происходит запрос заполнения по каждой машине, а затем она ставится в конец очереди. 
    //В начале рабочего часа мы моем первые три машины(они уходят из очереди), если машин меньше, то ,следовательно, мы моем меньше.
    for (int hour = 1; hour <= HOURS; hour++) {
        int count_of_cars;
        cout << "Час " << hour << endl;
        int a = q.size();
        if (!a) {
            cout << "Машин пока что нет на мойке" << endl;
        } else {
            if (a / 3) {
                for (int i = 0; i < 3; i++) {
                    Car c = q.front();
                    cout << "Была помыта машина >> " << '\t' << c.mark << '\t' << c.number << '\t' << c.owner << endl;
                    q.pop();
                }
                cout << "Было помыто 3 машины (осталось " << q.size() <<")" << endl;
            } else {
                for (int i = 0; i < (a % 3); i++ ) {
                    Car c = q.front();
                    cout << "Была помыта машина >> " << '\t' << c.mark << '\t' << c.number << '\t' << c.owner << endl;
                    q.pop();
                }
                cout << "Было помыто " << a % 3 << " машин, больше машин не осталось" << endl;
            }
            
        }
        cout << "Сколько машин заехало в этот час? ";
        cin >> count_of_cars;
        for (int i = 0; i < count_of_cars; i++) {
            string mark, number, owner;
            cout << "Марка: " << '\t';
            cin >> mark;
            cout << "Номер: " << '\t';
            cin >> number;
            cout << "Владелец: " << '\t';
            cin >> owner;
            Car c(mark,number,owner);
            q.push(c);
        }
    }
    int a = q.size();
    if (a > 3) {
        cout << "Предпрятие не успело справиться с поставленными заданиями в срок, что привело к банкротству. Конец." << endl;
    } else {
        cout << "Осталось всего несколько машин, после чего автомойка справится со всеми заказами в срок. Ура!" << endl;
    }
    return 0;
}

 

#include <iostream>


using namespace std;

int main()
{
    system("chcp 1251");
    double x;
    double y;
    cout << "Введите координаты х и у\n";
    int bal = 0;
    int vistrely = 0;
    while (bal<50) {
        cin >> x >> y;
        if (pow(x, 2.0) + pow(y, 2.0) <= 1) {
            bal += 10;
        }
        else if (pow(x, 2.0) + pow(y, 2.0) <= pow(2.0, 2.0)) {
            bal += 5;
        }
        else {

        }
        vistrely++;
    }
    cout << "Выстрелов всего = " << vistrely;
    if (vistrely < 7) {
        cout << "cнайпер";
    }
    else if (vistrely < 12) {
        cout << "стролок";
    }
    else {
        cout << "новичок";
    }
}
 
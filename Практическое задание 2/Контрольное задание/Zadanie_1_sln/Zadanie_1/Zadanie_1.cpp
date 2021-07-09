 
#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    cout << "Введите год , чтобы узнать являетс ли он высокосным : ";
    int year;
    cin >> year;
    if ((year % 400 == 0)||(year % 4 == 0) && (year % 100 != 0)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
 
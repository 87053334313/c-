
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    
    cout << "Введите через пробел координаты x и y\n";
    double x1;
    double y1;
    cin >> x1 >> y1;

    cout << "Введите через пробел координаты x и y\n";
    double x2;
    double y2;
    cin >> x2 >> y2;



    cout << "Введите через пробел координаты x и y\n";
    double x3;
    double y3;
    cin >> x3 >> y3;



    cout << "Введите через пробел координаты x и y\n";
    double x4;
    double y4;
    cin >> x4 >> y4;



    cout << "Введите через пробел координаты x и y\n";
    double x5;
    double y5;
    cin >> x5 >> y5;
    
    double mod1 = abs((x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5));
 
    double s = 0.5 * mod1;
    
    cout << "Площадь равна = " << s;


}

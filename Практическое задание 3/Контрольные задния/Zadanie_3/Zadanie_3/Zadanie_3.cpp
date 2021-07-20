 

#include <iostream>

using namespace std;

double ploshad(double a, double  b, double c);


int main()
{
    system("chcp 1251");
    cout << "Выберите треугольник: \nДля равностороннего введите 1 \nдля разностороннего введите 3";
    int stor;
    cout << endl;
    cin >> stor;
    switch(stor)
    {
    case 1:
    {
        cout << "Введите сторону равностороннего треугольника";
        double a1;
        cin >> a1;
        double S = ploshad(a1, a1, a1);
        cout << "Площадь = " << S;
    }
        break;
    case 3: 
    {
        cout << "Введи три стороны треуголиника через пробел";
        double a, b, c;
        cin >> a >> b >> c;
        double S1 = ploshad(a, b, c);
        cout << "Площадь = " << S1;
    }
        break;
    default:
            cout << "Вы ввели неправлиное значене для выбора треугольника";
 
    }


}
 


double ploshad(double a, double  b, double c)
{
    double x;
    double per = a + b + c;
    double p = per / 2;
    x = per / 3;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
 
#include <iostream>
#include <math.h>
using namespace std;


class Triangle
{
public:
    class Oshibka
    {
    public:
        string str;
        Oshibka()
        {
            str = "C  такими сторонами нельза создать треугольник";
        }
    };



    double a;
    double b;
    double c;
    Triangle(double a, double b, double c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        if (a < (b + c) && b < (a + c) && c < (a + b))
        {
        }
        else
        {
            throw Oshibka();
        }
    }
    double Ploshad()
    {

        double per = a + b + c;
        double p = per / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }

};


int main()
{
    system("chcp 1251");
    cout << "Введите 3 стороны треугольника что бы узнать площадь";
    double a, b, c;
    cin >> a >> b >> c;
   
    try 
    {
        Triangle* t = new Triangle(a, b, c);
        double S = t->Ploshad();
        cout << "площадь равна = "<<S;
    }
    catch (Triangle::Oshibka a) 
    {
        cout << a.str;
    }
}
 

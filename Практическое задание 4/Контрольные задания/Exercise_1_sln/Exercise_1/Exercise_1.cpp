 
#include <iostream>

using namespace std;

int Myroot(double, double, double, double&, double&);


int main()
{
    system("chcp 1251");
    cout << "Введите 'a' 'b' 'c' \n для уравнения вида a*x^2 + b*x + c = 0; ";
    double a, b, c;
    cin >> a>> b>> c;
    double x1=0, x2=0;
    int rez = Myroot(a, b, c, x1, x2);
    if (rez == 1) 
    {
        cout << "x1 =" << x1 << "  x2 =" << x2 << endl;
    }
    else if (rez == 0) 
    {
        cout << "x = " << x1;
    }
    else if (rez == -1) 
    {
        cout << "корней нет";
    }
}
 

int Myroot(double a, double b, double c, double& x1, double& x2) 
{
    double D = b * b - 4 * a * c;
    if (D > 0) 
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        //cout << "x1 =" << x1 << endl << "x2 = " << x2;
        return 1;
    }
    else if (D == 0) 
    {
        x1 = (-b + sqrt(D)) / (2 * a);
      
       // cout << "x =" << x1 << endl;
        return 0;
    }
    else 
    {
        //cout << "корней нет";
        return -1;
    }
}

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    system("chcp 1251");
    cout << "Введите значение периметра\n";
    double x;
    double per;
    cin >> per;
    double p = per / 2;
    x = per / 3;
    double s = sqrt(p * (p - x) * (p - x) * (p - x));
    cout<<"Cторона"<<"\t"<<"Площадь"<<"\n";
    cout << x << "  \t" << s << "\n";

}

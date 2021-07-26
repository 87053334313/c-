
#include <iostream>
#include <math.h>
using namespace std;

struct KvadUr
{
	double D;
	double x1;
	double x2;
};

KvadUr Reshen(double a,double  b,double  c)
{
	
	KvadUr otvets;
	
	double D = b * b - 4 * a * c;
	otvets.D = D;
	if(D > 0) 
	{
		otvets.x1 = (-b + sqrt(D)) / (2 * a);
		otvets.x2 = (-b - sqrt(D)) / (2 * a);
	}
	else if (D == 0) 
	{
		otvets.x1 = (-b + sqrt(D)) / (2 * a);
		otvets.x2 = 0;
	}
	else if (D < 0) 
	{
		
		otvets.x1 = 0;
		otvets.x2 = 0;
		
	}
	return otvets;
}


int main()
{
	system("chcp 1251");
	cout << "Данно уравнение вида a*x^2 + b*x +c = 0"<<endl;
	cout << "Введите a , b , c" << endl;
	double a, b, c;
	cin >> a>> b>> c;
	KvadUr k = Reshen(a, b, c);
	if (k.D<0) 
	{
		cout << "Корней нет";
	}
	else if (k.D > 0) 
	{
		cout << "x1 = " << k.x1 << endl << "x2 =" << k.x2 << endl;
	}
	else if (k.D == 0) 
	{
		cout << "x = " << k.x1;
	}

}

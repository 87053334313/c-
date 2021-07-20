 

#include <iostream>
double Suma(double n);
using namespace std;

int main()
{
	system("chcp 1251");
	cout << "Введи количество раз умножать 5 на счетчик +1\n";
	double x ;
	cin >> x;
	double rez = Suma(x);
	cout << "Ответ = "<<rez;
}


double Suma(double n) 
{
	double s = 5 * n;
	if (s <= 0)
		return 0;
	return s + Suma(n-1);

}



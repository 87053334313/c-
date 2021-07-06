 

#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	string name;
	double x;
	double a, b;
	cout << "\nВведите a и b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	x = a / b;
	cout.precision(3);
	cout << "\nx = " << x << endl;
	//cout << sizeof(a / b) << ends << sizeof(x) << endl;
	cout << "Привет, " << name <<"!\n";
	return 0;
}

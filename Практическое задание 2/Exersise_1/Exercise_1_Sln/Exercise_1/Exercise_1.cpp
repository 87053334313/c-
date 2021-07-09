
#include <iostream>

using namespace std;
int main()
{
	system("chcp 1251");
	cout << "Введи через пробел x , y";
	double x;
	double y;
	cin >> x >> y;
	if ((x * x + y * y < 9) && y > 0)
		cout << "внутри";
	else if ((x * x + y * y > 9) || y < 0)
		cout << "снаружи";
	else
		cout << "на границе";
}

 
#include <iostream>

using namespace std;


int main()
{
	system("chcp 1251");
	cout << "Введи последовательно три числа:";
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	if (x1 > x2 && x1 > x3) {
		cout << "max = " << x1;
	}
	else if (x2 > x1 && x2 > x3) {
		cout << "max = " << x2;
	}
	else if(x3>x1 && x3>x2) {
		cout << "max = " << x3;
	}
	else {
		cout << "Сложно выбрать наибольшее ведь максимальных два";
	}
}
 
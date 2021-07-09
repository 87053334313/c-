

#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	char op;
	cout << "Сделай свой выбор, собери авто своей мечты: ";
	cin >> op;
	switch (op)
	{
	case 'S':
		cout << "Радио играть должно\n";

	case 'V':
		cout << "Кондиционер хочу\n";

	default:
		cout << "Колеса круглые\n";
		cout << "Мощный двигатель\n";
	}
}

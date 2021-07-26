

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	system("chcp 1251");
	vector<int> v1;
	vector<int> v2;
	int a, b, c;
	int k = 0;
	for (int i = 0; i < 10; i++) 
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		cout << a << " * " << b << " = ";
		cin >> c;
		if (a * b != c) 
		{
			v2.push_back(c);
			k++;
			cout << "Непраильно"<<endl;
			cout << a << "*" << b <<"="<< a * b;
		}
		else 
		{
			v1.push_back(c);

		}
		cout << endl;
	}
	cout << endl;
	cout << "Правильные ответы: " << endl;
	for (int i = 0; i < v1.size(); i++) 
	{
		cout << v1[i] << endl;
	}
	cout << endl;
	cout << "Неправильных "<< k<< ", они:"<<endl;
	for (int i = 0; i < v2.size(); i = i + 1)
	{
		cout << v2[i] << endl;
	}
}

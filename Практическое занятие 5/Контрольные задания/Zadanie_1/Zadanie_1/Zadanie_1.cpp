
#include <iostream>
#include <iterator>
using namespace std;


void Zadanie_1(const int n, int mas[]) 
{
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]";
		cin >> mas[i];
	}
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	cout << endl;
	cout << "Сумма равна:" << s << endl;;
	double sr;
	sr = (double)s / n;
	cout << "Среднее равно:" << sr << endl;
	int sum_otr = 0;
	int sum_pol = 0;
	int sum_nechet = 0;
	int sum_chet = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
		{
			sum_otr += mas[i];
		}
		if (mas[i] > 0)
		{
			sum_pol += mas[i];
		}
		if (i % 2 == 0)
		{
			sum_chet += mas[i];
		}
		if (i % 2 != 0)
		{
			sum_nechet += mas[i];
		}

	}
	cout << "Сумма отрицательных эллементов: " << sum_otr << endl;
	cout << "Сумма положительных эллементов: " << sum_pol << endl;
	cout << "Сумма с нечетными индексами:" << sum_nechet << endl;
	cout << "Сумма с четными индексами" << sum_chet << endl;


	int max = mas[0];
	int min = mas[0];
	int index_max = 0;
	int index_min = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
			index_max = i;
		}
		if (mas[i] < min)
		{
			min = mas[i];
			index_min = i;
		}
	}
	int proizMaxMin = 1;
	cout << "Максимальнйы эллемент" << max << " его индекс в массиве:" << index_max << endl;
	cout << "Минимальный эллемент" << min << " его индекс в массиве" << index_min << endl;
	if (index_min <= index_max)
	{
		for (int i = index_min; i <= index_max; i++)
		{
			proizMaxMin *= mas[i];
		}
	}
	cout << "Произведение между максимальным и минимальным равно:" << proizMaxMin;
}

int main()
{
	system("chcp 1251");
	const int n = 10;
	int mas[n];
	Zadanie_1(n, mas);
}



#include <iostream>
#include <iterator>
using namespace std;

struct Distance
{
	int feet;
	double inches;

	void ShowDist()
	{
		cout << feet << "\'-" << inches << "\"\n";
	}
};


Distance AddDist(const Distance& d1, const Distance& d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}
Distance InputDist()
{
	Distance d;
	cout << "\nВведите число футов: ";
	cin >> d.feet;
	cout << "\nВведите число inches ";
	cin >> d.inches;
	return d;
}

void ShowDist(Distance d)
{
	cout << d.feet << "\'-" << d.inches << "\"\n";
}

int main()
{
	
	system("chcp 1251");
	int n;
	cout << "Введите размер массива  расстояний ";
	cin >> n;
	Distance* masDist = new Distance[n];
	for (int i = 0; i < n; i++) 
	{
		masDist[i] = InputDist();
	}
	for (int i = 0; i < n; i++) 
	{
		ShowDist(masDist[i]);
	}
	Distance d_sum;
	d_sum.feet = 0;
	d_sum.inches = 0;
	for(int i=0;i<n;i++)
	{
		if (d_sum.inches > 12) 
		{
			d_sum.feet++;
			d_sum.inches -= 12;
		}
		d_sum.feet += masDist[i].feet;
		d_sum.inches += masDist[i].inches;
	}
	cout << "Итоговая сумма";
	cout<<"foot =" << d_sum.feet;
	cout << endl << "duim = " << d_sum.inches;
	delete[] masDist;

}


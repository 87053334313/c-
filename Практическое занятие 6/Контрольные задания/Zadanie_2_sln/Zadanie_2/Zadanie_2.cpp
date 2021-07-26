

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	const int N = 10;
	int a[N] = { 1,25,6,32,43,5,96,23,4,55 };
	ofstream file1("nachalniyMassiv.txt");
	ofstream file2("SortedMassiv.txt");
	file1 << "{";
	for (int i = 0; i < N; i++) 
	{
		file1 << a[i] << ", ";
	}
	file1 << "}";
	file1.close();
	int min = 0;
	int buf = 0;

	for (int i = 0; i < N; i++)
	{
		min = i;  
		 
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		 
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	for (int i : a)
		cout << i << '\t';
	
 
	file2 << "{";
	for (int i : a) 
	{
		file2 << i << ", ";
	}
	file2 << "}";
	file2.close();
}
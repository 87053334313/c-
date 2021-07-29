

#include <iostream>

#include <string>
#include <windows.h>






using namespace std;


class Item 
{
private:
	string title;
	double price;
public:
	virtual void getdata() 
	{
		cout << "\nВведите заголовок";
		cin >> title;
		cout << "Введите цену";
		cin >> price;
	}

	virtual void putdata() 
	{
		cout << "\nЗаголовок: " << title;
		cout << "\nЦена" << price;
	}

};


class PaperBook : public Item 
{
private:
	int pages;
public:
	void getdata() 
	{
		Item::getdata();
		cout << "Ведите число страниц";
		cin >> pages;

	}
	void putData() 
	{
		Item::putdata();
		cout << "\nСтраниц:" << pages;
	}
};

class AudioBook :public Item 
{
private:
	double time;
public:
	void getdata() 
	{
		Item::getdata();
		cout << "Введите время звучания";
		cin >> time;
	}

	void putdata() 
	{
		Item::putdata();
		cout << "\nВремя звучания" << time;

	}
};
int main()
{
	SetConsoleOutputCP(1251);
	Item* pubarr[100];
	int n = 0;
	char choise;
	do 
	{
		cout<<"\nВводить данные для книги или звукового файла(b/a)?";
		cin >> choise;
		if (choise == 'b')
			pubarr[n] = new PaperBook;
		else
			pubarr[n] = new AudioBook;
		pubarr[n++]->getdata();
		cout << "Продолжать(y/n)>";
		cin >> choise;
	} while (choise == 'y');
	for (int j = 0; j < n; j++)
		pubarr[j]->putdata();
	cout << endl;
	return 0;
}



 
 
#include <iostream>;
#include <fstream>
#include <iterator>
#include <string>
using namespace std;

int main()
{
	system("chcp 1251");
	fstream file_to_write;
	 
	file_to_write.open("test_victor_li.txt",fstream::in | fstream::out);

	if (file_to_write.is_open()) 
	{
		string str;

		cout << "Веди любое стихотворение:";
		cout << "Но сначала введи сколько строчек в стихотворении";
		int skokStrok=1;
		cin >> skokStrok;
		std::cin.ignore(32767, '\n');
		string *stih = new string[skokStrok];
		cout <<endl<<"Теперь вводи строки:"<<endl;
		if (skokStrok > 0) 
		{
			for (int i = 0; i < skokStrok; i++) 
			{
				
				getline(cin,stih[i]);
 
			}
		}
		for (int i = 0; i < skokStrok; i++)
		{
			cout << "massiv [" << i << "] =" << stih[i];
		 string str = stih[i];
		 file_to_write<<str<<"\n";
		
		}
		file_to_write.close();
	}
	else 
	{
		cout << "Was mistake";
	}
	return 0;
}
 
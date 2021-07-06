

#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");
	string name;
	cout << "What is your name?";
	getline(cin, name);
	//cin >> name;
	cout << "Hello, " << name << "!\n";
}

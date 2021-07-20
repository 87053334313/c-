 
#include <iostream>
#include <string>

using namespace std;

string privet(string);
void privet(string, int);

int main()
{
    system("chcp 1251");
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
   
    int k;
    cout << "Input number:"<<endl;
    cin >> k;

    string nameOut = privet(name);

    cout << nameOut;
    cout<<endl;
    privet(name, k);
 

    return 0;

}

string privet(string name) {
    string  str = name + ", " + "hello!\n";
    return str;
}


void privet(string name, int k) {
    cout << name << ", " << "hello!" << "you input" << k << endl;
}
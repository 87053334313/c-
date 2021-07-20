 

#include <iostream>
#include "Header.h"
#include <vector>
using namespace std;
int main()
{
    system("chcp 1251");
    std::cout << "Введи число\n";
    int a;
    cin >> a;
    Perevod(a);
}
 


void Perevod(int a) 
{
    vector<int> v1;

    while (a != 0) 
    {
        int b = a / 2;
        if (a==1) 
        {
            //cout << 1;
            v1.push_back(1);
            break;
        }
        int c = a % b;
        a = b;
        
        //cout << c;
        v1.push_back(c);
    }
    cout << "Ответ:";
    for (auto iterator = v1.rbegin(); iterator != v1.rend(); ++iterator)
    {
        std::cout << *iterator;
    }
}
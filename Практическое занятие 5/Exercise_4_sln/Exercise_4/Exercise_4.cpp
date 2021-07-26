 
#include <iostream>

#include <string>

#include <iterator>

using namespace std;

void MyMass(int mas[], const int size) 
{
    int k;
    cout << "Введи значение в 0 индекс массива";
    cin >> k;
    mas[0] = k;
   
}


int main()
{
    system("chcp 1251");
    int n;
    cout << "Введи количество эллементов в массиве";
    cin >> n;
    int* myArray = new int[n];
    if (n >= 3) 
    {
        myArray[0] = 0;
        myArray[1] = 1;
        myArray[2] = 2;
    }
    MyMass(myArray,n);
    cout << "\nвесь массив:" << endl;;
    for (int i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }
    delete myArray;
}

 
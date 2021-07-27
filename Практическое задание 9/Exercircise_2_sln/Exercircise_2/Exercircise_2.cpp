
#include <iostream>
#include <string>
#include "Student01_main.cpp"


using namespace std;


class DivideByZeroError
{
private:
    string message;
public:
    DivideByZeroError() :message("Деление на нуль")
    {
    }
    void printMessage() const
    {
        cout << message << endl;
    }



};


float quotient(int num1, int num2)
{
    if (num2 == 0)
    {
        throw DivideByZeroError();
    }
    return (float)num1 / num2;
}

int main()
{
    system("chcp 1251");
    int a, b;
    cout << "введите a" << endl;
    cin >> a;
    for (int i=-10;i<10;i++)
    {
        try
        {
            cout << a << ":" << i << "=";
            float result = quotient(a, i);
            cout << "\nчастное равно: " << result << endl;
        }
        catch (DivideByZeroError& error)
        {
            cout << "Ошибка";
            error.printMessage();
            return 1;
        }
    }
    return 0;
}


 
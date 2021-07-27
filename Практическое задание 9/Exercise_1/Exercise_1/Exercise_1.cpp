
#include <iostream>
#include <string>



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
    if(num2==0)
    {
        throw DivideByZeroError();
    }
    return (float)num1 / num2;
}

int main()
{
    system("chcp 1251");
    int a, b;
    cout << "введите a разделить на b"<<endl;
    cin >> a >> b;
    try 
    {
        float result = quotient(a, b);
        cout << "\nчастное равно: " << result << endl;
    }
    catch (DivideByZeroError& error) 
    {
        cout << "Ошибка";
        error.printMessage();
        return 1;
    }
    return 0;
}

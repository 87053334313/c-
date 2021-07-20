 
#include <iostream>
int addNumbers(int n);
int addNumbers(int a, int b);

int gcd(int m, int n);
using namespace std;

int main()
{
    
    system("chcp 1251");
    /*
    cout << "Введите число до которого хотите увидеть сумму"<<endl;
    int i;
    cin >> i;
    int rez =addNumbers(i);
    cout << "Ответ:" << rez;
    */
    /*
    cout << "enter 2 chisla ot  do b summa ";
    int a, b;
    cin >> a >> b;
    int rez = addNumbers(a,b);
    cout << "rez = " << rez;
    */
    cout << "Введите два числа";
    int a, b;
    cin >> a >> b;
    int nod =gcd(a, b);
    cout << "НОД=" << nod;

}
 
int addNumbers(int n)
{
    if (n == 1)
        return 1;
    else
        return (n + addNumbers(n - 1));
}


int addNumbers(int a, int b)
{
    if (a < b)
    {
        return a + addNumbers(a + 1, b);
    }
    else
    {
        return a;
    }
}

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    return gcd(n, m % n);
}
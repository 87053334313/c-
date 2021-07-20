 

#include <iostream>

using namespace std;

double kubKoren(double a, double x);


int main()
{
    system("chcp 1251");
   // обычным способом кубический корень
    cout << "Введите число для извлечения кубического корня"<<endl;
    double a;
    cin >> a;
    
    double rez = pow(a, 1./ 3);
    cout << "Для обычного способа результат = " << rez;
    
    /*double a2;
    int st;
    cout << "Введитее число и тсепень квадратного корня";
    cin >> a2 >> st;

    double rez_2 = kubKoren(a2, st);
    cout <<rez_2 ;*/
}
//
//double kubKoren(double a, int x)
//{
//    double rez;
//    double otvet;
//    if (x>0)
//    {
//         rez = 1. / 3. * (a / kubKoren(rez, x -1) / kubKoren(rez, x - 1) + 2 * kubKoren(rez, x - 1));
//        
//    }
//    else {
//         rez = 1;
//        
//    }
//   
//    return rez;
// 
//   // double rez;
// 
//
//   //rez = 1. / 3. * (a / (x-1) / (x-1 ) + 2. * (x-1 ));
//   //
//   //
//   // return rez;
//}
 
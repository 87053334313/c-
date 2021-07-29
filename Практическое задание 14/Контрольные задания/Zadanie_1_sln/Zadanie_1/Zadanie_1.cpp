 

#include <iostream>

 
template <class T> T SreadArid(T* massiv, const int colvo)
{
    T sum = static_cast<T>(0);
    for (int i = 0; i < colvo; i++) {
        sum += static_cast<T>(massiv[i]);
  
    }
    T sredarif = static_cast<T>(sum )/ colvo;
    return sredarif;
}

using namespace std;
 int main()
{
    int* mas1= new int[5]{1,2,3,4,5};
    double* mas2 = new double[5]{ 0.5, 1.2, 3.3, 7.543, 8.3336};
    long* mas3 = new long[5]{ -1,2,0,4,5 };
    char* mas4 = new char[5]{ 'a','b','c','d','g' };
    int rez1 = SreadArid(mas1, 5);
    double rez2 = SreadArid(mas2, 5);
    long rez3 = SreadArid(mas3, 5);
    char rez4 = SreadArid(mas4, 5);
    cout << rez1 << endl;
    cout << rez2 << endl;
    cout << rez3 << endl;
    cout << rez4 << endl;
}


 
#include <iostream>

using namespace std;
long double firBinSearch(double a, int n);
int main()
{
    system("chcp 1251");

    double a;
    int b;
    cout << "Enter through space two numbers, first will be number whitch will be subject to degree , second will be degree";
    cout << endl;
    cin >> a >> b;
    long double rez =firBinSearch(a,b);
    cout << rez;
}


long double firBinSearch(double a, int n) {
    double L = 0;
    double R = a;
    while (R - L > 1e-10) {
        double M = (L + R) / 2;
        if (pow(M, n) < a) {
            L = M;
        }
        else {
            R = M;
        }

    }
    return R;

}

 


#include <iostream>

using namespace std;

int* max_vect(int n, int a1[], int b1[]) 
{
    int* c = new int[n];
    for (int i = 0;i < n; i++) 
    {
        if (a1[i] >= b1[i]) 
        {
            c[i] = a1[i];
        }
        else 
        {
            c[i] = b1[i];
        }
    }
    return c;
}
void print_massiv(const int a[]) 
{
   // int kc = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < 8; i++)
    {
        cout <<a[i]<<" ";
    }
}

int main()
{
    system("chcp 1251");
    int a[] = {1,2,3,4,5,6,7,2};
    int b[] = {7,6,5,4,3,2,1,3};
    cout << endl;
    print_massiv(a);
    cout << endl;
    print_massiv(b);
    cout << endl;
    int kc = sizeof(a) / sizeof(a[0]);

    int* c = max_vect(kc,a,b);
    for (int i = 0; i < kc; i++) 
    {
        cout <<" "<< c[i];
    }
    delete[] c;
}



#include <iostream>
using  namespace std;


void swap(int*, int*);

void swap(int&, int&);


int main()
{
    int x=5, y=10;
    swap(&x,&y);
    cout << "x = " << x << ", y = " << y<<endl;
    swap(x, y);
    cout << "x = " << x << ", y = " << y;
}




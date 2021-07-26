
#include <iostream>
using namespace std;
#include "Header.h";
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b));

int main()
{
    system("chcp 1251");

    bool (*from_f[2])(int, int) = { from_min,from_max };
        
    const int size = 10;
    int my_choose = 0;
    int myMass[size] = { -1,12,13,4,2,-4,22,100,-23,-5 };
    cout << "1. Сортировать по возрастанию\n";
    cout << "2. Сортировать по убыванию\n";
    cin >> my_choose;
    cout << "Исходные данные:";
    cout << endl;
    show_array(myMass,size);
    bubble_sort(myMass, size, (from_f[my_choose - 1]));
    show_array(myMass,size);
    return 0;
}

void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b)) 
{
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++) 
        {
            if ((*compare)(Arr[j], Arr[j + 1]))
                swap(Arr[j], Arr[j + 1]);
        }
    }
}


void show_array(const int Arr[], const int N) 
{
    for (int i = 0; i < N; i++) 
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

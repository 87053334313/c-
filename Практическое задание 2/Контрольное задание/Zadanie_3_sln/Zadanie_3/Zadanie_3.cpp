 
#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    cout << "Введите сумму для жадного размена монет\n";
    int sum;
    cin >> sum;
    int i_10 = 0;
    int i_5 = 0;
    int i_2 = 0;
    int i_1 = 0;

    while (sum/10>=1 && sum>0) {
        i_10++;
        sum -= 10;
    }
    while (sum / 5 >= 1 && sum > 0) {
        i_5++;
        sum -= 5;
    }
    while (sum / 2 >= 1 && sum > 0) {
        i_2++;
        sum -= 2;
    }
    while (sum / 1 >= 1 && sum > 0) {
        i_1++;
        sum -= 1;
    }

    cout << "десяток =  " << i_10 << "\n";
    cout << "пятерок = " << i_5 << "\n";
    cout << "двоек = " << i_2 << "\n";
    cout << "однерок = " << i_1 << "\n";
}
 
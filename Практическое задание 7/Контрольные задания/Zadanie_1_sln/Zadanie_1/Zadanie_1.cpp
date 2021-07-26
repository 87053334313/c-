
#include <iostream>
#include <math.h>
using namespace std;

struct Time 
{
    int hours;
    int minutes;
    int seconds;
};


int GetSecond(Time t) 
{
    int sec = t.seconds + t.minutes * 60 + t.hours * 60 * 60;
    return sec;
}

Time Add(Time t1, Time t2) 
{
    Time t3;
    t3.seconds = 0;
    t3.minutes = 0;
    t3.hours = 0;

    t3.seconds = t1.seconds + t2.seconds;
    if (t3.seconds>=60) 
    {
        t3.minutes++;
        t3.seconds -= 60;
    }

        t3.minutes = t2.minutes + t1.minutes +t3.minutes;
        if (t3.minutes >= 60) 
        {
            t3.hours++;
            t3.minutes -= 60;
        }
    t3.hours = t1.hours + t2.hours + t3.hours;
    return t3;
}

Time Minus(Time t1, Time t2)
{
    Time t3;
    t3.seconds = 0;
    t3.minutes = 0;
    t3.hours = 0;

    int t1_sec = GetSecond(t1);
    int t2_sec = GetSecond(t2);

    int  t3_sec = t1_sec - t2_sec;
    t3.seconds = t3_sec;
    if (abs(t3_sec) >= 60) 
    {
        t3.minutes = t3_sec / 60;
        t3.seconds -= (t3_sec / 60) * 60;
    }
    if (abs(t3.minutes) >= 60) 
    {
        t3.hours = t3_sec / 60;
        t3.minutes -= (t3_sec / 60) * 60;
    }
        
     

   
    return t3;
}




void Otvet(Time t3) 
{
    cout << endl << "hour: " << t3.hours;
    cout << endl << "minutes: " << t3.minutes;
    cout << endl << "sec:" << t3.seconds;
}

int main()
{
    system("chcp 1251");
    cout << "Введите время в формате:\n часы, минуты, секунды";
    int h;
    int m;
    int c;
    cin >> h >> m >> c;
    Time t;
    t.hours = h;
    t.minutes = m;
    t.seconds = c;
    cout << "\n это в Секундах : " << GetSecond(t);
    cout << endl;
    cout << "Введите еще один инетрвал времени: в фомате\n часы, минуты, секунды";
    cin >> h >> m >> c;
    Time t2;
    t2.hours = h;
    t2.minutes = m;
    t2.seconds = c;
    cout << "Для сложения введите '+'  для вычитания введите '-'";
    string str="";
    cin >> str;
    if (str == "+")
    {
        Time t3 = Add(t, t2);
        Otvet(t3);
    }
    else if (str == "-")
    {
        Time t3 = Minus(t, t2);
        Otvet(t3);
    }
    else {
        cout << "mistake";
    }
}

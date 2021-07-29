 
#include <iostream>


using namespace std;

class Time
{
public:
    class Oshibka
    {
    public:
        string mistake;
        Oshibka(int i)
        {
            switch (i)
            {
            case 0:
                mistake = "часы не могут быть отрицательными";
                break;

            case 1:
                mistake = "минуты не могут быть отрицательными";
                break;

            case 2:
                mistake = "секунды не могут быть отрицательными";
                break;
            }
        }
    };


public:
    int hour;
    int minutes;
    int secunds;
public:
 

    void GetAllData()
    {
        cout << "Часов:" << hour << endl;
        cout << "Минут" << minutes << endl;
        cout << "Секунд:" << secunds << endl;
        cout << "Время :  " << hour << ":" << minutes << ":" << secunds << endl;
    }


    Time()
    {
        hour = 0;
        minutes = 0;
        secunds = 0;
    }
    Time(int h, int m, int c)
    {
        if (h < 0)
        {
            throw Oshibka(0);
        }
        else if (m < 0)
        {
            throw Oshibka(1);
        }
        else if (c < 0)
        {
            throw Oshibka(2);
        }
        hour = h;
        minutes = m;
        secunds = c;

        int sec = secunds + minutes * 60 + hour * 60 * 60;
        secunds = sec;
        if (secunds >= 60)
        {
            minutes = secunds / 60;
            secunds -= (secunds / 60) * 60;
        }
        if (minutes >= 60)
        {
            hour = minutes / 60;
            minutes -= (minutes / 60) * 60;
        }

    }




    int GetSecond(Time t)
    {
        int sec = t.secunds + t.minutes * 60 + t.hour * 60 * 60;
        return sec;
    }


 


};

Time operator+(Time t1, Time t2) 
{
    Time t3;
    t3.secunds = 0;
    t3.minutes = 0;
    t3.hour = 0;

    t3.secunds = t1.secunds + t2.secunds;
    if (t3.secunds >= 60)
    {
        t3.minutes++;
        t3.secunds -= 60;
    }

    t3.minutes = t2.minutes + t1.minutes + t3.minutes;
    if (t3.minutes >= 60)
    {
        t3.hour++;
        t3.minutes -= 60;
    }
    t3.hour = t1.hour + t2.hour + t3.hour;
    return t3;
}

int GetSecond(Time t)
{
    int sec = t.secunds + t.minutes * 60 + t.hour * 60 * 60;
    return sec;
}
Time Minus(Time t1, Time t2);

Time operator-(Time t1, Time t2) 
{
    Time t3 = Minus(t1, t2);
    return t3;
}

Time Minus(Time t1, Time t2)
{
    Time t3;
    t3.secunds = 0;
    t3.minutes = 0;
    t3.hour= 0;

    int t1_sec = GetSecond(t1);
    int t2_sec = GetSecond(t2);

    int  t3_sec = t1_sec - t2_sec;
    t3.secunds = t3_sec;
    while (t3.secunds >= 60) 
    {
        if (abs(t3_sec) >= 60)
        {
            t3.minutes ++;
            t3.secunds -= 60;
        }
        if (abs(t3.minutes) >= 60)
        {
            t3.hour ++;
            t3.minutes -=60;
        }

    }


    return t3;
}




void Otvet(Time t3)
{
    cout << endl << "hour: " << t3.hour;
    cout << endl << "minutes: " << t3.minutes;
    cout << endl << "sec:" << t3.secunds;
}



Time Add(Time* t1, Time* t2)
{

    Time t3;
    t3.secunds = 0;
    t3.minutes = 0;
    t3.hour = 0;

    t3.secunds = t1->secunds + t2->secunds;
    if (t3.secunds >= 60)
    {
        t3.minutes++;
        t3.secunds -= 60;
    }

    t3.minutes = t2->minutes + t1->minutes + t3.minutes;
    if (t3.minutes >= 60)
    {
        t3.hour++;
        t3.minutes -= 60;
    }
    t3.hour = t1->hour + t2->hour + t3.hour;
    return t3;
};



Time operator+(Time t1, double a) 
{
    Time t3;
    t3.secunds = 0;
    t3.minutes = 0;
    t3.hour = 0;

    int t1_sec = GetSecond(t1);
   

    int  t3_sec = t1_sec + a*60*60;
    t3.secunds = t3_sec;
    while (t3.secunds >= 60)
    {
        if (abs(t3_sec) >= 60)
        {
            t3.minutes++;
            t3.secunds -= 60;
        }
        if (abs(t3.minutes) >= 60)
        {
            t3.hour++;
            t3.minutes -= 60;
        }

    }


    return t3;
}


Time operator+( double a, Time t1)
{
    Time t3;
    t3.secunds = 0;
    t3.minutes = 0;
    t3.hour = 0;

    int t1_sec = GetSecond(t1);


    int  t3_sec = t1_sec + a * 60 * 60;
    t3.secunds = t3_sec;
    while (t3.secunds >= 60)
    {
        if (abs(t3_sec) >= 60)
        {
            t3.minutes++;
            t3.secunds -= 60;
        }
        if (abs(t3.minutes) >= 60)
        {
            t3.hour++;
            t3.minutes -= 60;
        }

    }


    return t3;
}

void operator>(Time t1, Time t2) 
{
    int t1_s = GetSecond(t1);
    int t2_s = GetSecond(t2);
    if (t1_s > t2_s) 
    {
        cout << "Больше первое время";
    }
    else if (t1_s == t2_s) 
    {
        cout << "Времена равны";
    }
    else 
    {
        cout << "Больше второе время";
    }
}

int main()
{
    system("chcp 1251");
    cout << "Введите 1 время: часы, минуты, секунды "<<endl;
    int h, m, c;
    cin >> h >> m >> c;
    Time t1(h, m, c);
    cout << "Введите 2 время: часы, минуты, секунды "<<endl;
    cin >> h >> m >> c;
    Time t2(h, m, c);

    cout << "\n";
    t1 > t2;
    cout << "\n";
    cout << "резултат сложения " << endl;
    Time t3 = t1 + t2;
    t3.GetAllData();
    cout << "\nРезултат вычитания" << " = \n";
    Time t4 = t1 - t2;
    t4.GetAllData();
    cout << "Веди число для пребавления к предыдущему варианту";
    double s;
    cin >> s;

    Time t5 = t4 + s;
    t5.GetAllData();
    cout << "Веди число для пребавления к предыдущему варианту";
 
    cin >> s;
    Time t6 = s  + t5;
    t6.GetAllData();

}

 
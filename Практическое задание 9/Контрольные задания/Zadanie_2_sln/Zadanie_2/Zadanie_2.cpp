// Zadanie_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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



int main()
{
    system("chcp 1251");
    try
    {
        int h1, m1, c1;
        cout << "Введи часы минуты секунды для 1 го объекта";
        cin >> h1 >> m1 >> c1;
        Time* t1 = new Time(h1, m1, c1);
        t1->GetAllData();
        cout << "Введи часы минуты секунды для 2 го объекта";
        cin >> h1 >> m1 >> c1;
        Time* t2 = new Time(h1, m1, c1);
        t2->GetAllData();

        Time t3 = Add(t1, t2);

        cout << endl << "sum =" << "\n";
        t3.GetAllData();
    }
    catch (Time::Oshibka o) 
    {
        cout << o.mistake;
    }
}

 
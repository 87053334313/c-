 
#include <iostream>
#include <map>

using namespace std;

struct StudentGrade 
{
public:
    string name;
    char ball;
};




int main()
{
    system("chcp 1251");
    map<string, StudentGrade> MyColl;
    StudentGrade viktor;
    viktor.name = "Viktor";
    viktor.ball = '5';
    StudentGrade sasha;
    sasha.name = "Sasha";
    sasha.ball = 'B';
    StudentGrade misha;
    misha.name = "Misha";
    misha.ball = '3';

    MyColl["Viktor"] = viktor;
    MyColl["Sasha"] = sasha;
    MyColl["Misha"] = misha;
    string otvet;
    do {
        cout << "\n";
        cout << "У вас есть три ученика , вы моежет по имени изменить значение оценки";   cout << "\n";
        for (map<string, StudentGrade>::iterator it = MyColl.begin(); it != MyColl.end(); ++it)
        {
            cout << "Name = " << it->first << "\t" << "Otsenka =" << it->second.ball << "  \n";
        }
        cout << "Введите имя ученика, у которого хотите изменить оценку\n";
        string name;
        cin >> name;
        cout << "Введите его оценку\n";
        char o;
        cin >> o;

        MyColl[name].ball = o;
        for (map<string, StudentGrade>::iterator it = MyColl.begin(); it != MyColl.end(); ++it)
        {
            cout << "Name = " << it->first << "\t" << "Otsenka =" << it->second.ball << "  \n";
        }
       
        cout << "Выйти?(y/n)";
        cin >> otvet;
            
    
    } while (otvet != "y");
} 
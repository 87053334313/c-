

#include <iostream>
#include "Source.cpp"

using namespace std;



int main()
{
    system("chcp 1251");
    Student student01;
    string name;
    string last_name;
    int scores[5];
    cout << "Name: ";
    getline(cin, name);
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }
    student01.set_name(name);
    student01.set_last_name(last_name);
    try {
        student01.set_scores(scores);
    }
    catch (Student::ExScore& ex) 
    {
        cout << "\nОшибка инициализации " << ex.origin;
        cout << "\nВведенное значение оценки " << ex.iValue << "является недопустимым\n";
    }
    double averege_score = sum / 5.0;
    student01.set_average_score(averege_score);
    cout << "Averege ball for " << student01.get_name() << " " <<
        student01.get_last_name() << " is " << student01.get_average_score() << endl;
    return 0;
}


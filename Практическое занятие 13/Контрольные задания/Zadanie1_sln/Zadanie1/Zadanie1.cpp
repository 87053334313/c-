#include <iostream>

#include <iostream>
#include <vector>
#include <string> 
#include <sstream>
using namespace std;
class human
{
private:
	std::string name;
	std::string last_name;
	std::string second_name;
public:
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}
	virtual  void AllDatas() 
	{

	}
};

#include <vector>
class student :public human
{
private:
	std::vector<int> scores;


public:
	student(std::string last_name, std::string name, std::string second_name, std::vector<int> scores) :human(last_name, name, second_name)
	{
		this->scores = scores;
	}
	student(std::string last_name, std::string name, std::string second_name) :human(last_name, name, second_name)
	{
		 
	}

  void AllDatas()  
	{
	 
	  cout << get_full_name();
		cout << "\nsredniy bal uchenika" << get_average_score();
	}


	float get_average_score()
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;
		float average_score;

		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}

		average_score = (float)sum_scores / (float)count_scores;
		return average_score;

	}
};

#include <string>

using namespace std;
class teacher :public human
{

private:
	unsigned int work_time;
public:
	teacher(std::string last_name, std::string name, string second_name, unsigned int work_time) :human(last_name, name, second_name)
	{
		this->work_time = work_time;
	}

	teacher(std::string last_name, std::string name, string second_name) :human(last_name, name, second_name)
	{
		 
	}

	unsigned int get_worktime()
	{
		return this->work_time;
	}

	 void AllDatas() 
	{
		 
		cout<<get_full_name();
		cout << "\nVremya ushitelya" <<get_worktime();
	}

};

int main()
{
	system("chcp 1251");

	vector<human*> massiv;
	string vvod;
	do 
	{
		cout << "Кого добавить студента или учителя(u/s)";
		string str;
		cin >> str;
		if (str == "u")
		{
			string name, secondName, patronymic;
			cout << "Введите последовательно имя фамилию отчество teacher";
			cin >> name >> secondName >> patronymic;
			cout << "Enter time";
			int time;
			cin >> time;
			teacher* t = new teacher(name, secondName, patronymic, time);
			massiv.push_back(t);
		}
		else if (str == "s") 
		{
			string name, secondName, patronymic;
			cout << "Введите последовательно имя фамилию отчество student";
			cin >> name >> secondName >> patronymic;
			cout << "Enter stduent mark";
			vector<int> stud_v;
			int otz;
			cin >> otz;
			stud_v.push_back(otz);
			student* s = new student(name, secondName, patronymic, stud_v);
			massiv.push_back(s);
			
		}
		cout << "\n Prodolzhit' ? (y/n)";
		cin >> vvod;
	} 
	while (vvod != "n");

	for (human* h : massiv) 
	{
		h->AllDatas();
 
	}
	


}
 
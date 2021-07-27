#include <iostream>
#include <string>
#include "IdCard.cpp"
#include <fstream>
using namespace std;

class Student
{
public:
	IdCard* iCard;
	Student(string name, string last_name, IdCard* id) 
	{
		set_name(name);
		set_last_name(last_name);
		setIdCard(id);
	}

	void setIdCard(IdCard* c) 
	{
		iCard = c;
	}

	IdCard* getIdCard() 
	{
		return iCard;
	}
	void save()
	{
		ofstream fout("students.txt", ios::app);
		fout << get_name() << " "
			<< get_last_name() << " ";
		for (int i = 0; i < 5; ++i)
		{
			fout << Student::scores[i] << " ";
		}

		fout << endl;
		fout.close();
	}


	~Student()
	{
		save();
	}


	Student(string name, string last_name)
	{
		set_name(name);
		set_last_name(last_name);
	}


	void set_name(string student_name)
	{
		name = student_name;
	}

	string get_name()
	{
		return name;
	}

	void set_last_name(string student_last_name)
	{
		last_name = student_last_name;
	}

	string get_last_name()
	{
		return last_name;
	}

	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; i++)
		{
			scores[i] = student_scores[i];
		}
	}

	void set_average_score(double ball)
	{
		average_score = ball;
	}

	double get_average_score()
	{
		return average_score;
	}

private:
	int scores[5];
	double average_score;
	string name;
	string last_name;
};
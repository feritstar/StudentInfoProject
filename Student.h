#pragma once
#include <iostream>

using namespace std;

class Student
{
private:
	int id;
	string name;
	string surName;
	int grade;

public:
	Student(int _id, string _name, string _surName, int _grade);
	void setId(int _id);
	void setName(string _name);
	void setSurName(string _surName);
	void setGrade(int _grade);

	int getId();
	string getName();
	string getSurName();
	int getGrade();

	void getInformation();
};


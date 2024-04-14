#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(int _id, string _name, string _surName, int _grade)
{
    id = _id;
    name = _name;
    surName = _surName;
    grade = _grade;
}

void Student::setId(int _id)
{
    id = _id;
}

void Student::setName(string _name)
{
    name = _name;
}

void Student::setSurName(string _surName)
{
    surName = _surName;
}

void Student::setGrade(int _grade)
{
    grade = _grade;
}

int Student::getId()
{
    return id;
}

string Student::getName()
{
    return name;
}

string Student::getSurName()
{
    return surName;
}

int Student::getGrade()
{
    return grade;
}

void Student::getInformation()
{
    cout << Student::id << " Student name, surname and grade are : " << Student::name << " " << Student::surName << ", " << Student::grade << endl;
}

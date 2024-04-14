#include "Main.h"
#include "Student.h"
#include <list>
#include "Windows.h"

using namespace std;

void menuEntry()
{
	cout << "* * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "*                                       *" << endl;
	cout << "*                 MENU                  *" << endl;
	cout << "*                                       *" << endl;
	cout << "* * * * * * * * * * * * * * * * * * * * *" << endl;

	cout << endl;

	cout << "1. Add new student." << endl;
	cout << "2. Show student list." << endl;
	cout << "3. Delete a student by ID" << endl;
	cout << "4. Find a student by ID" << endl;
	cout << "5. Quit from Menu" << endl;
}

void addNewStudent(list<Student> *list)
{
	int id, grade;
	string name, surName;

	cout << "Please enter student Id: " << endl;
	cin >> id;

	cout << "Please enter student name: " << endl;
	cin >> name;

	cout << "Please enter student surName: " << endl;
	cin >> surName;

	cout << "Please enter student Grade: " << endl;
	cin >> grade;

	Student student(id, name, surName, grade);

	list->push_back(student);

	system("cls");
	cout << "Student added succesfully!" << endl << endl << endl;
}

void showList(list<Student> *lst)
{
	cout << endl << "-----------------Student List------------\n";
	list<Student>::iterator itr;
	for (itr = lst->begin(); itr != lst->end(); itr++)
	{
		itr->getInformation();
	}
	cout << endl;
	cout << endl;
}

void deleteStudent(list<Student>* lst)
{
	list<Student>::iterator itr;
	int id;

	cout << "Please enter student Id to delete: " << endl;
	cin >> id;

	for (itr = lst->begin(); itr != lst->end(); itr++)
	{
		if (itr->getId() == id)
		{			
			break;
		}
	}

	if (itr == lst->end())
	{
		cout << "Student with id " << id << " is not in the list!" << endl;
		cout << "Id " << id << " student can not be deleted !" << endl;
	}
	else
	{
		cout << "Student is found!" << endl;
		lst->erase(itr);
		cout << "Id " << id << " student is deleted from the list!" << endl;
	}	
}

void findStudent(list<Student>* lst)
{
	list<Student>::iterator itr;
	int id;

	cout << "Please enter student Id to find: " << endl;
	cin >> id;

	for (itr = lst->begin(); itr != lst->end(); itr++)
	{
		if (itr->getId() == id)
		{
			break;
		}
	}

	if (itr == lst->end())
	{
		cout << "Student with id " << id << " is not in the list!" << endl;
	}
	else
	{
		cout << endl << "Student is found!" << endl;
		itr->getInformation();
	}
}

int main()
{
	list<Student> *studentList = new list<Student>();

	int selection = 0;
	cout << endl;
	do
	{
		menuEntry();
		cout << "Waiting for your choice: " << endl;
		cin >> selection;

		if (selection == 1) { addNewStudent(studentList); }
		else if (selection == 2){ showList(studentList); }
		else if (selection == 3){ deleteStudent(studentList); }
		else if (selection == 4){ findStudent(studentList); }
		else if (selection == 5){ break; }
		else { cout << "Wrong choice. Try again please...."; }

	} while (selection != 5);

	cout << endl;
	return 0;
}
/*Alexandria Piatt
10/30/16
Program 4*/


#include "Student.h"

using namespace std;

void main()
{
	ifstream in("Students.txt");
	ifstream rin("checkouts.txt");
	ifstream lin("checkins.txt");
	ofstream out("Updated_Students.txt");
	unsigned int studentID;
	string item;
	int totalStudents = 0;

	if (!in)
		cout << "failed to open file.";
	if (!rin)
		cout << "failed to open file.";
	if (!lin)
		cout << "failed to open file.";
	
	Student s1;

	while (in >> s1)
	{
		++totalStudents;
	}

	Student *students = new Student[totalStudents];

	for (int i = 0; i < totalStudents; i++)
	{
		in >> students[i];
	}

	in.close();

	while (rin.good())
	{
		rin >> studentID;
		for (int i = 0; i < totalStudents; i++)
		{
			if (students[i].getID() == studentID)
			{
				rin >> item;
				students[i].CheckOut(item);
			}
		}
	}

	while (lin.good())
	{
		lin >> item;
		for (int i = 0; i < totalStudents; i++)
		{
			if (students[i].CheckIn(item))
				break;
		}
	}

	for (int i = 0; i < totalStudents; i++)
		out << students[i];


	delete[] students;
	students = NULL;
	in.close();
	rin.close();
	lin.close();
	out.close();


	 
	



	



}
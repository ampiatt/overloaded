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
	int i = 0;
	const int size = 100;
	Student s1;
	Student* students = new Student[size];
	
	while (in >> s1)
	{
		cout << s1;
	}
	//while (!in.eof())
	//{
	//	in >> students[totalStudents];
	//	++totalStudents;
	//}
	
	

	//for (int i = 0; i < totalStudents; i++)
	//{
	//	students[i] = s1;
	//}

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
#include "Student.h"

Student::Student()
{
	idNumb = 0;
	firstName = "";
	lastName = "";
	itemName = "";
	aSize = 0;
	numItems = 0;
	pointy = NULL;
}

void Student::setID(unsigned int nID)
{
	if ((nID > 999) && (nID < 100001))
		idNumb = nID;
	else
		cout << "Invalid ID Number.";
}

void Student::setFirst(string nFirst)
{
	firstName = nFirst;
}

void Student::setLast(string nLast)
{
	lastName = nLast;
}

int Student::CheckoutCount()
{
	return numItems;
}

bool Student::CheckOut(const string& item)
{
	if (HasCheckedOut(item))
		return false;

	if (pointy == NULL && aSize == 0)
	{
		string *newPointy = new string[5];
	}

		string *newPointy = new string[aSize];
	
	for (int i = 0; i < aSize; i++)
	{
		newPointy[i] = pointy[i];
	}
	if (pointy != NULL && aSize > 0)
		delete[] pointy;
	pointy = newPointy;

	pointy[numItems] = itemName;
	numItems++;

	return true;
}

bool Student::CheckIn(const string& item)
{
	if (!HasCheckedOut(item))
		return false;
	string *newPointy = new string[aSize];
	int nArraySize = 0;
	for (int i = 0; i <aSize; i++)
	{
		if (pointy[i] != item)
		{
			newPointy[nArraySize] = pointy[i];
			nArraySize++;
		}
	}

	delete[] pointy;
	pointy = newPointy;
	numItems--;
}

bool Student::HasCheckedOut(const string& item)
{
	for (int i = 0; i < aSize; i++)
	{
		if (pointy[i] == item)
			return true;
	}
	return false;
}

void Student::Clear()
{
	idNumb = 0;
	firstName = "";
	lastName = "";

	if((pointy != NULL) && (numItems > 0))
	delete[] pointy;
	pointy = NULL;
	numItems = 0;
}

Student::~Student()
{
	delete[] pointy;
	pointy = NULL;
}

istream& operator>>(istream& in, Student& item)
{	
	item.Clear();
	string itemOut;
	unsigned int id;
	string first, last;
	in >>id >> first >> last >> item.aSize;
	item.setID(id);
	item.setFirst(first);
	item.setLast(last);

		for (int i = 0; i < item.aSize; i++)
	{
		in >> itemOut;
		item.CheckOut(itemOut);
	}
	return in;
}
ostream& operator<<(ostream& out, const Student& item)
{
	out << item.idNumb << " " << item.firstName << " " << item.lastName << endl;
	out << item.numItems << endl;
	for (int i = 0; i < item.numItems; i++)
	{
		out << item.pointy[i] << " ";
	}
	return out;
}

Student Student::operator+(Student &student1)
{
	Student anotherStudent;
	anotherStudent = student1;
	anotherStudent.CheckOut(itemName);
	return anotherStudent;
}
	
void Student:: operator+=(string& itemName)
{
	CheckOut(itemName);

}
bool operator==(Student & s1, Student &s2)
{
	if (s1.getID() == s2.getID())
		return true;
	else
		return false;
}


#pragma once

/*Alexandria Piatt
10/30/16
Program 4*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Student 
{
protected:
	string firstName, lastName, itemName;
	unsigned int idNumb;
	int numItems, aSize;
	string* pointy = NULL;
public:
	//default constructor
	Student();

	//setters
	void setID(unsigned int nID);
	void setFirst(string nFirst);
	void setLast(string nLast);

	//getters
	int getID() { return idNumb; }
	string getFirst() { return firstName; }
	string getLast() { return lastName; }

	int CheckoutCount();
	//returns number of items student has checked out

	//takes a string parameter to describe an item 
	bool CheckOut(const string& item);
	//checks if item is in if it is, checks it out

	//takes a string parameter to describe an item
	bool CheckIn(const string& item);
	//checks if item is checked out and deletes the array if so.  a successful check in
	//returns true, if not it returns false.

	//takes an item parameter
	bool HasCheckedOut(const string& item);
	//checks if item is on the students checked out list

	void Clear();
	//clears the objects data 

	//destructor
	~Student();

	//Operator overloads
	friend istream& operator>>(istream& in, Student& item);
	//reads data in from text stream 

	friend ostream& operator<<(ostream& out, const Student& item);
	//outputs data into text file 
	
	Student operator+(Student &student1);
	//overloads the addition function adds an item to a student and outputs a new user

	void operator+=(string &itemName);
	//another way to add an item to a student and check it out

	bool friend operator==(const Student &item, const Student &item1);
	//checks if two students have the same id number or not

};
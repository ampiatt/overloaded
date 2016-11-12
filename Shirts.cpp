#include "Shirts.h"
//
//#ifndef H_SHIRTS
//#define H_SHIRTS
//
//#include "Products.h"
//
//using namespace std;
//class Shirts :protected Products
//{
//private:
//	string size;
//
//public:
//	Shirts();
//	void setSize(string s);
//	void print(ostream &out);
//	double caculateTotal(double p, int q);
//
//};
//#endif

Shirts::Shirts()
{
	size = "";
	description = "";
}

void Shirts::setSize(string s)
{
	size = s;
}

void Shirts::setDescription(string d)
{
	description = d;
}

void Shirts::print(ostream &out)
{
	out << quantity << "  " << size << "  " << description << " " << calculateTotal() << endl;
}

double Shirts::calculateTotal()
{
	double total;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	if ((size == "2XL") || (size == "3XL"))
	{
		total = (price * quantity) + 1;
		return total;
	}
	else
	{
		total = price * quantity;
		return total;
	}
}
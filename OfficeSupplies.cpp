#include "OfficeSupplies.h"
#include "Products.h"

//OfficeSupplies();
//void setCount(unsigned int c);
//void print(ostream &out);
//double calculateTotal();

OfficeSupplies::OfficeSupplies()
{
	count = 0;
	iDescription = "";
}

void OfficeSupplies::setCount(unsigned int c)
{
	count = c;
}
void OfficeSupplies::setDescription(string ides)
{
	iDescription = ides;
}
double OfficeSupplies::calculateTotal()
{
	double total = price * quantity;
	return total; 
}

void OfficeSupplies::print(ostream &out)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	out << quantity << " " << iDescription << " (" << count << " count)" << " " << calculateTotal() << endl;
}
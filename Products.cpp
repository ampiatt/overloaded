#include "Products.h"

using namespace std;

Products::Products()
{
	price = 0.0;
	quantity = 0;
	type = "";
}

Products::Products(double p, int q)
{
	price = p;
	quantity = q;
}

void Products::setPrice(double p1)
{
	price = p1;
}

void Products::setQuanity(int q1)
{
	quantity = q1;
}

void Products::setType(string t)
{
	type = t;
}

double Products::calculateTotal()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	double total = price * quantity;

	cout << total;
	return total;
}
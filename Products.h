#ifndef H_PRODUCTS
#define H_PRODUCTS

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class Products
{
public:
	double price;
	int quantity; 
	string type;
	Products();
	Products(double p, int q);
	
	void setPrice(double p1);
	void setQuanity(int q1);
	void setType(string t);

	virtual void print(ostream &out) = 0;
	virtual double calculateTotal();
};
#endif
#ifndef H_OFFICESUPPLIES
#define H_OFFICESUPPLIES

#include "Products.h"

using namespace std;

class OfficeSupplies : public Products
{
private:
	unsigned int count;
	string iDescription;
public:
	OfficeSupplies();
	void setCount(unsigned int c);
	void setDescription(string ides);
	void print(ostream &out);
	double calculateTotal();

};
#endif
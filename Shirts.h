#ifndef H_SHIRTS
#define H_SHIRTS

#include "Products.h"

using namespace std;
class Shirts :public Products
{
private: 
	string size, description;
	
public:
	Shirts();
	void setSize(string s);
	void setDescription(string d);
	void print(ostream &out);
	double calculateTotal();
	

};
#endif
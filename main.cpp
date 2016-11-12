#include "OfficeSupplies.h"
#include "Products.h"
#include "Register.h"	
#include "Shirts.h"

using namespace std;

void main()
{
	//Shirts shirt;
	//OfficeSupplies supply;
	//string si = "XL";
	//string des = "CHIEFS";
	//string des1 = "STAPLES";

	//double p = 3.00;
	//int q = 3;
	//unsigned int c = 3000;

	//double p1 = .25;
	//int q1 = 15;

	//shirt.setPrice(p);
	//shirt.setQuanity(q);
	//shirt.setSize(si);
	//shirt.setDescription(des);

	//shirt.calculateTotal();
	//shirt.print(cout);
	//
	//supply.setPrice(p1);
	//supply.setQuanity(q1);
	//supply.setType(des1);
	//supply.setCount(c);
	//supply.setDescription(des1);

	//supply.calculateTotal();
	//supply.print(cout);

	ifstream in("products.txt");
	ofstream out("receipt.txt");

	Register r;

	r.addProduct(in);
	//r.printReceipt(out);


	
}
#ifndef H_REGISTER
#define H_REGISTER



class Register 
{
private:
	Products *products[50];
	int numProducts;
public:
	Register();
	void addProduct();
	void printReceipt();

};
#endif

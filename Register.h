#ifndef H_REGISTER
#define H_REGISTER



class Register 
{
private:
	Products *products[50];
	int numProducts;
	string typeP;
public:
	Register();
	void addProduct(istream &in);
	void printReceipt(ostream &out);

};
#endif

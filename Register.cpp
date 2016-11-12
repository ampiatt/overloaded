#include "Products.h"
#include "Register.h"
#include "OfficeSupplies.h"
#include "Shirts.h"

using namespace std;

Register::Register()
{
	*products = nullptr;
	numProducts = 0;
}

void Register::addProduct(istream &in)
{

	int i = 0;
	int quantity, count;
	double price = 0.0;

	string size, description;
	
	in >> typeP;
	while (in.good())
	{
		if (typeP == "SHIRT")
		{
			Shirts s;
			in.ignore();
	
			getline(in, description);
			getline(in, size);
			//in.ignore();
			in >> quantity;
			in >> price;
			s.setDescription(description);
			s.setSize(size);
			s.setQuanity(quantity);
			s.setPrice(price);

			products[i] = &s;
			numProducts++;
		}
		else if (typeP == "SUPPLIES")
		{
			OfficeSupplies os;
			in >> description >> count >> quantity >> price;
			os.setDescription(description);
			os.setCount(count);
			os.setQuanity(quantity);
			os.setPrice(price);

			products[i] = &os;
			numProducts++;
		}
		i++;
		in >> typeP;
	}

	//trying to figure out why my array isnt working.
S	for (int u = 0; u < numProducts; u++)
	{
		cout << products[i]->calculateTotal();
	}

}

void Register::printReceipt(ostream &out)
{
	out << "INSERT HEADER HERE";

	for (int i = 0; i < numProducts; i++)
	{
		//breaks everything HELLLPP MEEE~~
		products[i]->print(out);
	}
}
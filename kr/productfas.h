#pragma once
#include "product.h"
class ProductFas : public Product {
private:
	double quantity;

public:

	ProductFas(string n, string d, double p, int quantity);

	~ProductFas();

	void setQuantity(double quantity);
	int getQuantity();

	void print();
};
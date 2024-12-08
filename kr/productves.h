#pragma once
#include "product.h"
class ProductVes : public Product {
private:
	double quantity;

public:

	ProductVes(string n, string d, double p, double quantity);

	~ProductVes();

	void setQuantity(double quantity);
	double getQuantity();

	void print();
};
#include <iostream>
#include "productfas.h"

using namespace std;

ProductFas::ProductFas(string name, string description, double price, int quantity) :
	Product(name, description, price), quantity(quantity) {}


void ProductFas::setQuantity(double quantity) {
	this->quantity = quantity;
}

int ProductFas::getQuantity() { return this->quantity; }

ProductFas::~ProductFas() {}

void ProductFas::print() {
	cout << "Имя: " << getName() << ", Описание: " << getDescription()
		<< ", Цена: " << getPrice() << ", Кол-во" << quantity << endl;
}
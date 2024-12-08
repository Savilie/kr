#include <iostream>
#include "productves.h"

using namespace std;

ProductVes::ProductVes(string name, string description, double price, double quantity) :
	Product(name, description, price), quantity(quantity) {}


void ProductVes::setQuantity(double quantity) {
	this->quantity = quantity;
}

double ProductVes::getQuantity() { return this->quantity; }

ProductVes::~ProductVes(){}

void ProductVes::print() {
	cout << "Имя: " << getName() << ", Описание: " << getDescription()
		<< ", Цена: " << getPrice() << ", Кол-во в кг" << quantity << endl;
}
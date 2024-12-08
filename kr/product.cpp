#include <iostream>
#include "product.h"

Product::Product(string n, string d, double p)
    :name(n), description(d), price(p) {}

Product::Product(string n, string d) : Product(n, d, 0){}
Product::Product(string n) : Product(n, "", 0) {}

Product::~Product() {}

void Product::setName(string n) {
    name = n;
}
void Product::setDescription(string d) {
    description = d;
}
void Product::setPrice(double p) {
    price = p;
}


void Product::print() {
    cout << "Имя: " << name << ", Описание: " << description
        << ", Цена: " << price << endl;
}
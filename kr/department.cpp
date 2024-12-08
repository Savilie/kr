#include <iostream>
#include "department.h"

void Department::print() {
    cout << this->name<<"\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Product: " << products[i]->getName() << std::endl;
    }
}

Department::~Department() {}

void Department::setProducts(Product** prods, int new_size) {
    this->size = new_size;
    this->products = new Product * [size];
    for (int i = 0; i < size; i++) {
        this->products[i] = prods[i]; // Копируем указатели вручную
    }
}


void Department::setName(string n) {
    this->name = n;
}

string Department::getName() { return this->name; }

Department::Department(string name, Product** products, int size) : name(name), size(size){
    this->products = new Product * [size];
    for (int i = 0; i < size; i++) {
        this->products[i] = products[i]; // Копируем указатели вручную
    }
}

//Department::Department(string name) : Department(name, {}) {}
//
//Department(const std::string& name, Product** products, size_t size) : name(name), size(size) {
//    this->products = new Product * [size];
//    for (size_t i = 0; i < size; i++) {
//        this->products[i] = products[i]; // Копируем указатели вручную
//    }
#pragma once 

#include <iostream> 
#include <string>
#include "product.h"
using namespace std;

class Department {

private:
    string name;
    Product** products;
    int size;
public:

    Department() = default;

    ~Department();

    Department(string name, Product** products, int size);

    //Department(string name);

    void setProducts(Product** prods, int new_size);
    void setName(string n);
    string getName();

    //Пример доступа к продуктам
    void print();
};
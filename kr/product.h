#pragma once 

#include <iostream> 
#include <string>

using namespace std;

class Product {
private:
	string name;
	string description;

	double price;

public:
	Product() = default;
	Product(string n, string d, double p);
	Product(string n, string d);
	Product(string n);
	
	~Product();


	//геттеры надо
	virtual string getName() { return name; }
	virtual string getDescription() { return description; }
	virtual double getPrice() { return price; }
	
	virtual void setName(string n);
	virtual void setDescription(string d);
	virtual void setPrice(double p);

	virtual void print() = 0;

};
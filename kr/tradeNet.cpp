#include <iostream>
#include <string>
#include "tradeNet.h"

Network::Network(string name, Shop** shops, int size) : name(name), size(size) {
    this->shops = new Shop * [size];
    for (int i = 0; i < size; i++) {
        this->shops[i] = shops[i]; // Копируем указатели вручную
    }
}

Network::~Network(){}

void Network::setName(string n) {
    this->name = n;
}

string Network::getName() { return this->name; }

void Network::setShops(Shop** shops, int new_size) {
    this->size = new_size;
    this->shops = new Shop * [size];
    for (int i = 0; i < size; i++) {
        this->shops[i] = shops[i]; // Копируем указатели вручную
    }
}

void Network::print() {
    cout << this->name << "\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Shop: " << shops[i]->getName() << std::endl;
        shops[i]->print(); cout << "\n";
    }
}
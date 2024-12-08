#pragma once
#include <string>
#include "shop.h"

using namespace std;

class Network {
private:
    string name;
    Shop** shops;
    int size;

public:
    Network() = default;

    ~Network();

    Network(string name, Shop** shops, int size);

    void setShops(Shop** shops, int new_size);
    void setName(string n);
    string getName();

    void print();

};
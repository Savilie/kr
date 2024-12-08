#pragma once
#include <string>
#include "department.h"
#include "client.h"
#include "employes.h"

using namespace std;

class Shop {

private:
    string name;
    Employe** employes;
    Client** clients;
    Department** departments;
    int e_size;
    int c_size;
    int d_size;
public:

    Shop() = default;

    Shop(string name, Department** departments, Client** clients, Employe** employes, int e_size, int c_size, int d_size);

    void setDepartments(Department** deps, int new_size);
    void setClient(Client** cls, int new_size);
    void setEmploye(Employe** ems, int new_size);


    void setName(string n);

    string getName();

    void print();

};
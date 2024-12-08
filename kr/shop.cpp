#include <iostream>
#include "shop.h"

void Shop::print() {
    cout << this->name << "\n";
    for (int i = 0; i < d_size; i++) {
        std::cout << "Departments: " << departments[i]->getName() << std::endl;
    }
    for (int i = 0; i < e_size; i++) {
        std::cout << "Employes: " << employes[i]->getFirstName()<<" "<< employes[i]->getLastName() << " " << employes[i]->getJob() << std::endl;
    }
    for (int i = 0; i < c_size; i++) {
        std::cout << "Clients: " << clients[i]->getFirstName() << " " << clients[i]->getLastName() << std::endl;
    }
}

void Shop::setDepartments(Department** deps, int new_size) {
    this->d_size = new_size;
    this->departments = new Department * [d_size];
    for (int i = 0; i < d_size; i++) {
        this->departments[i] = deps[i]; // Копируем указатели вручную
    }
}

void Shop::setClient(Client** cls, int new_size) {
    this->c_size = new_size;
    this->clients = new Client * [c_size];
    for (int i = 0; i < c_size; i++) {
        this->clients[i] = cls[i]; // Копируем указатели вручную
    }
}

void Shop::setEmploye(Employe** ems, int new_size) {
    this->e_size = new_size;
    this->employes = new Employe * [e_size];
    for (int i = 0; i < e_size; i++) {
        this->employes[i] = ems[i]; // Копируем указатели вручную
    }
}


void Shop::setName(string n) {
    this->name = n;
}

string Shop::getName() { return this->name; }

Shop::Shop(string name, Department** departments, Client** clients, Employe** employes,
    int e_size, int c_size, int d_size) : name(name), e_size(e_size), c_size(c_size), d_size(d_size) {
    this->departments = new Department * [d_size];
    this->clients = new Client * [c_size];
    this->employes = new Employe * [e_size];

    for (int i = 0; i < d_size; i++) {
        this->departments[i] = departments[i]; // Копируем указатели вручную
    }
    for (int i = 0; i < c_size; i++) {
        this->clients[i] = clients[i]; // Копируем указатели вручную
    }
    for (int i = 0; i < e_size; i++) {
        this->employes[i] = employes[i]; // Копируем указатели вручную
    }
}
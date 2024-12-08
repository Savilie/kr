#include "client.h"
#include <iostream>

using namespace std;


// конструкторы по умолчанию

Client::Client() {
    this->firstName = "-";
    this->lastName = "-";
    this->age = 0;
}


Client::Client(string fName, string lName, int a)
    : firstName(fName), lastName(lName),
    age(a) {}

Client::Client(string fName, string lName) : Client(fName, lName, 0) {}

Client::Client(string fName) : Client(fName, "", 0) {}



// Деструктор
Client::~Client() {}

// Геттеры
const string Client::getFirstName() { return firstName; }
const string Client::getLastName() { return lastName; }
int Client::getAge() { return age; }


// Сеттеры
void Client::setFirstName(string fn) { firstName = fn; }
void Client::setLastName(string ln) { lastName = ln; }
void Client::setAge(int age) { age = age; }


void Client::print() {
    cout << "Имя: " << firstName << ", Фамилия: " << lastName
        << ", Возраст: " << age << endl;
}

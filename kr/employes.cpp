#include "client.h"
#include "employes.h"
#include <iostream>

using namespace std;


// ������������ �� ���������

Employe::Employe() {
    this->firstName = "-";
    this->lastName = "-";
    this->age = 0;
}


Employe::Employe(string fName, string lName, string j, int a)
    : firstName(fName), lastName(lName), job(j),
    age(a) {}

Employe::Employe(string fName, string lName, string j) : Employe(fName, lName, j, 0) {}

Employe::Employe(string fName, string lName) : Employe(fName, lName, "", 0) {}


Employe::Employe(string fName) : Employe(fName,"", "", 0) {}


// ����������
Employe::~Employe() {}

// �������
string Employe::getFirstName() { return firstName; }
string Employe::getLastName() { return lastName; }
int Employe::getAge() { return age; }
string Employe::getJob() { return job; }

// �������
void Employe::setFirstName(string fn) { firstName = fn; }
void Employe::setLastName(string ln) { lastName = ln; }
void Employe::setAge(int age) { age = age; }
void Employe::setJob(string j) { job = j; }


void Employe::print() {
    cout << "���: " << firstName << ", �������: " << lastName
        << ", �������: " << age << ", ���������: " << job << endl;
}

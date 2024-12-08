#pragma once
#include <string>

using namespace std;

class Employe {
protected:
    string firstName;
    string lastName;
    string job;
    int age;


public:

    Employe();

    // Конструктор с параметрами

    Employe(string fName, string lName, string j, int a);

    Employe(string fName, string lName, string j);

    Employe(string fName, string lName);

    Employe(string fName);


    // Деструктор
    ~Employe();

    // Геттеры
    string getFirstName();
    string getLastName();
    string getJob();
    int getAge();


    // Сеттеры
    void setFirstName(string fn);
    void setLastName(string ln);
    void setJob(string j);
    void setAge(int age);

    void print();


};

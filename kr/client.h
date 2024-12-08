#pragma once
#include <string>

using namespace std;

class Client {
protected:
    string firstName;
    string lastName;
    int age;


public:

    Client();

    // Конструктор с параметрами

    Client(string fName, string lName, int a);

    Client(string fName, string lName);

    Client(string fName);


    // Деструктор
    ~Client();

    // Геттеры
    const string getFirstName();
    const string getLastName();
    int getAge();


    // Сеттеры
    void setFirstName(string fn);
    void setLastName(string ln);
    void setAge(int age);

    void print();


};

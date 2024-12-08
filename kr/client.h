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

    // ����������� � �����������

    Client(string fName, string lName, int a);

    Client(string fName, string lName);

    Client(string fName);


    // ����������
    ~Client();

    // �������
    const string getFirstName();
    const string getLastName();
    int getAge();


    // �������
    void setFirstName(string fn);
    void setLastName(string ln);
    void setAge(int age);

    void print();


};

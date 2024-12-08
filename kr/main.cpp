#include <iostream>
#include "productves.h"
#include "productfas.h"
#include "department.h"
#include "shop.h"
#include "client.h"
#include "employes.h"
#include "tradeNet.h"



using namespace std;


int main(){

	setlocale(LC_ALL, "RUSSIAN.1251");

	ProductVes ves1("�����", "������ ������ �����������", 200, 50.5);

	ProductFas fas1("������", "������ ������ �������������", 100, 35);

	ProductFas fas2("���������������", "��������������� Galar", 525, 22);

	ProductFas fas3("�������� ��� ����� ������", "�������� ��� ������ ������ Farie", 450, 25);
	
    Product* sof1[] = {&ves1, &fas1};
	Product* sof2[] = { &fas2, &fas3 };

	Department dep1("���", sof1, 2);

	dep1.print();

	Department dep2("�����", sof2, 2);

	dep2.print();

	Department* deps[] = { &dep1, &dep2 };

	Client cli1("����", "������", 18);
	Client cli2("����", "������", 18);

	Client* clis[] = { &cli1, &cli2 };

	Employe emp1("�����", "����", "��������", 18);
	Employe emp2("�����", "��������", "�������", 22);

	Employe* emps[] = { &emp1, &emp2 };

	Shop lenta242("����� 242", deps, clis, emps, 2, 2, 2);

	lenta242.print();

	Shop* shp[] = { &lenta242 };

	Network lenta("�������� ���� �����", shp, 1);

	lenta.print();

	return 0;

}
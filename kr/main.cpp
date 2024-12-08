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

	ProductVes ves1("Банан", "Бананы свежие эквадорские", 200, 50.5);

	ProductFas fas1("Яблоки", "Яблоки свежие краснодарские", 100, 35);

	ProductFas fas2("Стеклоомыватель", "Стеклоомыватель Galar", 525, 22);

	ProductFas fas3("Средство для мытья посуды", "Средство для мыться посуды Farie", 450, 25);
	
    Product* sof1[] = {&ves1, &fas1};
	Product* sof2[] = { &fas2, &fas3 };

	Department dep1("СОФ", sof1, 2);

	dep1.print();

	Department dep2("Химка", sof2, 2);

	dep2.print();

	Department* deps[] = { &dep1, &dep2 };

	Client cli1("Ваня", "Нурмин", 18);
	Client cli2("Дима", "Трость", 18);

	Client* clis[] = { &cli1, &cli2 };

	Employe emp1("Карим", "Араб", "Дизайнер", 18);
	Employe emp2("Толик", "Анаболик", "Грузчик", 22);

	Employe* emps[] = { &emp1, &emp2 };

	Shop lenta242("Лента 242", deps, clis, emps, 2, 2, 2);

	lenta242.print();

	Shop* shp[] = { &lenta242 };

	Network lenta("Торговая сеть Лента", shp, 1);

	lenta.print();

	return 0;

}
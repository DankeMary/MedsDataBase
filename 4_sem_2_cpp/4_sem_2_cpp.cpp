
// 4_sem_2_cpp.cpp: определяет точку входа для консольного приложения.
 
/*11. Запись о лекарственном препарате содержит поля : номер аптеки, название лекарства, количество упаковок, 
наличие, стоимость одной упаковки, дата поступления в аптеку, срок хранения.Поиск по номеру аптеки, 
наименованию препарата, дате поступления.
Результатом должна быть консольная программа с текстовым меню.Программа должна содержать шаблонный класс 
для управления данными согласно заданию.Для хранения данных необходимо выбрать оптимальный 
с точки зрения задания контейнер.
Выполнила : Лактионова Мария Александровна (2к, 9г)*/


#include "stdafx.h"
#include <string>
#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

struct date {
	int day;
	int month;
	int year;
};

date getDate() {
	date d;
	d.day = 0;
	d.month = 0;
	d.year = 0;
	cout << "Введите день: ";
	while (d.day < 1 || d.day > 30)
	{
		cin >> d.day;
		if (d.day < 1 || d.day > 30)
			cout << "Ошибка! Повторите ввод" << endl;
	}

	cout << "Введите месяц: ";
	while (d.month < 1 || d.month > 12)
	{
		cin >> d.month;
		if (d.month < 1 || d.month > 30)
			cout << "Ошибка! Повторите ввод" << endl;
	}

	cout << "Введите год: ";
	while (d.year < 1 || d.year > 30)
	{
		cin >> d.year;
		if (d.year < 1900 || d.year > 2020)
			cout << "Ошибка! Повторите ввод" << endl;
	}
	return d;
}

class Med 
{
private:
	int farmNum;
	string name;
	int quantity;
	bool available;
	double price;
	date arrival;
	int shelfLife;
protected:
		
	void getData()
	{
		cout << "Введите номер аптеки: ";
		cin >> farmNum;

		cout << "Введите название лекарства: ";
		cin >> name;

		cout << "Введите количество упаковок ";
		cin >> quantity;

		cout << "Имеется ли лекарство в наличии? 1 - да, 0 - нет : ";
		cin >> available;
		
		cout << "Введите стоимость 1 упаковки: ";
		cin >> price;

		cout << "Введите дату поступления в аптеку ";
		arrival = getDate();
		
		cout << "Введите срок хранения: ";
		cin >> shelfLife;
	}
public:
	Med() {
		farmNum = 0;
		name = "";
		quantity = 0;
		available = false;
		price = 0.0;
		arrival.day = 0;
		arrival.month = 0;
		arrival.year = 0;
		shelfLife = 0;
	}
	Med(int farmNumTag, string nameTag, int quantTag, bool availTag, double priceTag, date arriveTag, int lifeTag)
	{
		farmNum = farmNumTag;
		name = nameTag;
		quantity = quantTag;
		available = availTag;
		price = priceTag;
		arrival.day = arriveTag.day;
		arrival.month = arriveTag.month;
		arrival.year = arriveTag.year;
		shelfLife = lifeTag;
	}
};
int main()
{
    return 0;
}


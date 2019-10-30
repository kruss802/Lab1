#include <iostream>
#include <locale>
#include <string>
#include <Windows.h>
#include "Car.h"

using namespace std;

Car::Car(string ry, string b, string m, string ds, string noh, string cv)
{
	Set_release_year(ry);
	Set_brand(b);
	Set_model(m);
	Set_delivery_sities(ds);
	Set_number_of_hours(noh);
	Set_cargo_volume(cv);
}

void Car::Add(string data)
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите год выпуска автомобиля" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_release_year(data);
	cout << "Введите марку" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_brand(data);
	cout << "Введите модель" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_model(data);
	cout << "Введите города в которые осуществляется доставка" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_delivery_sities(data);
	cout << "Введите количество часов доставки" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_number_of_hours(data);
	cout << "Введите объем груза, тонн" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_cargo_volume(data);
}

void Car::Show()
{
	cout << "Год выпуска автомобиля:" << " " << Get_release_year() << endl;
	cout << "Марка:" << " " << Get_brand() << endl;
	cout << "Модель:" << " " << Get_model() << endl;
	cout << "Города в которые осуществляется доставка:" << " " << Get_delivery_sities() << endl;
	cout << "Количество часов доставки:" << " " << Get_number_of_hours() << endl;
	cout << "Объем груза:" << " " << Get_cargo_volume() << " тонн" << endl;
}
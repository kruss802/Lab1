#include <iostream>
#include <locale>
#include <string>
#include <Windows.h>
#include "Train.h"

using namespace std;

Train::Train(string n, string ry, string r, string kr, string cv)
{
	Set_name(n);
	Set_release_year(ry);
	Set_route(r);
	Set_kolvo_railcars(kr);
	Set_cargo_volume(cv);
}

void Train::Add(string data)
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите наименование поезда" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_name(data);
	cout << "Введите год выпуска" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_release_year(data);
	cout << "Введите полный маршрут следования" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_route(data);
	cout << "Введите количество вагонов" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_kolvo_railcars(data);
	cout << "Введите объем груза, тонн" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_cargo_volume(data);
}

void Train::Show()
{
	cout << "Наименование поезда:" << " " << Get_name() << endl;
	cout << "Год выпуска:" << " " << Get_release_year() << endl;
	cout << "Маршрут следования:" << " " << Get_route() << endl;
	cout << "Количество вагонов:" << " " << Get_kolvo_railcars() << endl;
	cout << "Объем груза:" << " " << Get_cargo_volume() << " тонн" << endl;
}
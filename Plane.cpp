#include <iostream>
#include <locale>
#include <string>
#include <Windows.h>
#include "Plane.h"

using namespace std;

Plane::Plane(string t, string n, string cv, string d, string vs)
{
	Set_type(t);
	Set_name(n);
	Set_cargo_volume(cv);
	Set_dimension(d);
	Set_visit_sities(vs);
}

void Plane::Add(string data)
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите тип самолета" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_type(data);
	cout << "Введите наименование самолета" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_name(data);
	cout << "Введите объем груза, тонн" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_cargo_volume(data);
	cout << "Введите габариты груза (_х_х_)" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_dimension(data);
	cout << "Введите города, которые посещает самолет" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_visit_sities(data);
}

void Plane::Show()
{
	cout << "Тип самолета" << " " << Get_type() << endl;
	cout << "Наименование:" << " " << Get_name() << endl;
	cout << "Объем груза:" << " " << Get_cargo_volume() << "тонн" << endl;
	cout << "Габариты груза:" << " " << Get_dimension() << endl;
	cout << "Города, посещаемые самолетом:" << " " << Get_visit_sities() << endl;
}
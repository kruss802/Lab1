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
	cout << "������� ��� ������� ����������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_release_year(data);
	cout << "������� �����" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_brand(data);
	cout << "������� ������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_model(data);
	cout << "������� ������ � ������� �������������� ��������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_delivery_sities(data);
	cout << "������� ���������� ����� ��������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_number_of_hours(data);
	cout << "������� ����� �����, ����" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_cargo_volume(data);
}

void Car::Show()
{
	cout << "��� ������� ����������:" << " " << Get_release_year() << endl;
	cout << "�����:" << " " << Get_brand() << endl;
	cout << "������:" << " " << Get_model() << endl;
	cout << "������ � ������� �������������� ��������:" << " " << Get_delivery_sities() << endl;
	cout << "���������� ����� ��������:" << " " << Get_number_of_hours() << endl;
	cout << "����� �����:" << " " << Get_cargo_volume() << " ����" << endl;
}
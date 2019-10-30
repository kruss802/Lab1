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
	cout << "������� ��� ��������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_type(data);
	cout << "������� ������������ ��������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_name(data);
	cout << "������� ����� �����, ����" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_cargo_volume(data);
	cout << "������� �������� ����� (_�_�_)" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_dimension(data);
	cout << "������� ������, ������� �������� �������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_visit_sities(data);
}

void Plane::Show()
{
	cout << "��� ��������" << " " << Get_type() << endl;
	cout << "������������:" << " " << Get_name() << endl;
	cout << "����� �����:" << " " << Get_cargo_volume() << "����" << endl;
	cout << "�������� �����:" << " " << Get_dimension() << endl;
	cout << "������, ���������� ���������:" << " " << Get_visit_sities() << endl;
}
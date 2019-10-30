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
	cout << "������� ������������ ������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_name(data);
	cout << "������� ��� �������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_release_year(data);
	cout << "������� ������ ������� ����������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_route(data);
	cout << "������� ���������� �������" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_kolvo_railcars(data);
	cout << "������� ����� �����, ����" << endl << ">";
	SetConsoleCP(1251);
	getline(cin, data);
	SetConsoleCP(866);
	Set_cargo_volume(data);
}

void Train::Show()
{
	cout << "������������ ������:" << " " << Get_name() << endl;
	cout << "��� �������:" << " " << Get_release_year() << endl;
	cout << "������� ����������:" << " " << Get_route() << endl;
	cout << "���������� �������:" << " " << Get_kolvo_railcars() << endl;
	cout << "����� �����:" << " " << Get_cargo_volume() << " ����" << endl;
}
#include <iostream>
#include <locale>
#include <string>
#include "Cargo_carrier.h"
#include "Plane.h"
#include "Train.h"
#include "Car.h"

using namespace std;

int main()
{
	Cargo_Carrier* edit;
	Cargo_Carrier* edit2;
	Cargo_Carrier* edit3;
	Car* tmp3 = new Car;
	edit3 = tmp3;
	Train* tmp2 = new Train;
	edit2 = tmp2;
	Plane* tmp = new Plane;
	edit = tmp;
	setlocale(LC_ALL, "RUS");
	string data;
	int value = 0;
	int number;
	do 
	{
		system("cls");
		cout << "1. �������� ���������� � ��������\n2. �������� ���������� � ��������\n3. �������� ���������� � ������\n4. �������� ���������� � ������\n5. �������� ���������� �� ����������\n6. �������� ���������� �� ����������\n7. �����\n" << endl;
		(cin >> number).get();
		switch (number)
		{
		case 1:
			edit->Add(data);
			break;
		case 2:
			edit->Show();
			system("pause");
			break;
		case 3:
			edit2->Add(data);
			break;
		case 4:
			edit2->Show();
			system("pause");
			break;
		case 5:
			edit3->Add(data);
			break;
		case 6:
			edit3->Show();
			system("pause");
			break;
		default: cout << "�����" << endl;
			break;
		}
	} while (number != 7);
	system("pause");
	return 0;
}
#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Cargo_Carrier
{
private:
	int size;
	string type; //тип самолета
	string name; //наименование самолета, поезда
	string cargo_volume; //объем перевозимого груза
	string dimension; //габариты груза
	string visit_sities; //какие города посещает самолет
	string release_year; //год выпуска поезда, машины
	string route; //полный маршрут следования поезда
	string kolvo_railcars; //количество вагонов
	string brand; //марка машины
	string model; //модель машины
	string delivery_sities; //в какие города осуществляется доставка
	string number_of_hours; //количество часов доставки для каждого города
public:
	Cargo_Carrier() {};
	virtual ~Cargo_Carrier() {};
	virtual void Add(string data) = 0;
	virtual void Show() = 0;
//	virtual void Read() = 0;
//	virtual void Dell() = 0;
	void Set_type(string t)
	{
		type = t;
	}
	void Set_name(string n)
	{
		name = n;
	}
	void Set_cargo_volume(string cv)
	{
		cargo_volume = cv;
	}
	void Set_dimension(string d)
	{
		dimension = d;
	}
	void Set_visit_sities(string vs)
	{
		visit_sities = vs;
	}
	void Set_release_year(string ry)
	{
		release_year = ry;
	}
	void Set_route(string r)
	{
		route = r;
	}
	void Set_kolvo_railcars(string kr)
	{
		kolvo_railcars = kr;
	}
	void Set_brand(string b)
	{
		brand = b;
	}
	void Set_model(string m)
	{
		model = m;
	}
	void Set_delivery_sities(string ds)
	{
		delivery_sities = ds;
	}
	void Set_number_of_hours(string noh)
	{
		number_of_hours = noh;
	}
	int Get_size()
	{
		return size;
	}
	string Get_type()
	{
		return type;
	}
	string Get_name()
	{
		return name;
	}
	string Get_cargo_volume()
	{
		return cargo_volume;
	}
	string Get_dimension()
	{
		return dimension;
	}
	string Get_visit_sities()
	{
		return visit_sities;
	}
	string Get_release_year()
	{
		return release_year;
	}
	string Get_route()
	{
		return route;
	}
	string Get_kolvo_railcars()
	{
		return kolvo_railcars;
	}
	string Get_brand()
	{
		return brand;
	}
	string Get_model()
	{
		return model;
	}
	string Get_delivery_sities()
	{
		return delivery_sities;
	}
	string Get_number_of_hours()
	{
		return number_of_hours;
	}

};
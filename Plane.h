#pragma once
#include <iostream>
#include "Cargo_carrier.h"

using namespace std;

class Plane :public Cargo_Carrier
{
public:
	Plane() {};
	Plane(string t, string n, string cv, string d, string vs);
	void Add(string data) override;
	void Show() override;
	//void Read() override;
	//void Dell() override;
};
#pragma once
#include <iostream>
#include "Cargo_carrier.h"

using namespace std;

class Train :public Cargo_Carrier
{
public:
	Train() {};
	Train(string n, string ry, string r, string kr, string cv);
	void Add(string data) override;
	void Show() override;
};
#pragma once
#include <iostream>
#include "Cargo_carrier.h"

using namespace std;

class Car :public Cargo_Carrier
{
public:
	Car() {};
	Car(string ry, string b, string m, string ds, string noh, string cv);
	void Add(string data) override;
	void Show() override;
};

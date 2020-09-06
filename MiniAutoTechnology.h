#pragma once
#include <iostream>
#include<string>
#include "Conveyor.h"
using namespace std;

class MiniAutoTechnology : public Conveyor
{
public:

	void BuildBody()override
	{
		car->body = "Mini Car body";
	}
	void InstallEngine()override
	{
		car->engine = "Mini Car engine";
	}
	void InstallWheels()override
	{
		car->wheels = "Mini Car wheels";
	}
	void Paint()override
	{
		car->paint = "Mini Car paint";
	}
	void PrepareSalon()override
	{
		car->salon = "Mini Car salon";
	}
};

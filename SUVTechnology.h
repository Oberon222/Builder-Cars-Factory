#pragma once
#include <iostream>
#include<string>
#include"Conveyor.h"
using namespace std;

class SUVTechnology : public Conveyor
{
public:
	void BuildBody()override
	{
		car->body = "SUV body";
	}

	void InstallEngine() override
	{
		car->engine = "SUV engine";
	}
	void InstallWheels() override
	{
		car->wheels = "SUV wheels";
	}

	void Paint() override
	{
		car->paint = "SUV paint";
	}

	void PrepareSalon() override
	{
		car->salon = "SUV salon";
	}
};



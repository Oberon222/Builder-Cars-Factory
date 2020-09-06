#pragma once
#include <iostream>
#include<string>
#include"Conveyor.h"
using namespace std;

class SportCarTechnology : public Conveyor
{
public:

	void BuildBody()override
	{
		car->body = "Sport Car body";
	}
	void InstallEngine()override
	{
		car->engine = "Sport Car engine";
	}
	void InstallWheels()
	{
		car->wheels = "Sport Car wheels";
	}
	void Paint()override
	{
		car->paint = "Sport Car paint";
	}
	void PrepareSalon()override
	{
		car->salon = "Sport Car salon";
	}
};
#pragma once
#include<iostream>
#include<string>
#include"Car.h"
using namespace std;

class Conveyor
{
protected:

	Car* car;
public:

	void CreateNewCar()
	{
		car = new Car();
	}

	Car* GetMyCar()
	{
		return car;
	}

	virtual void BuildBody() = 0;
	virtual void InstallEngine() = 0;
	virtual void InstallWheels() = 0;
	virtual void Paint() = 0;
	virtual void PrepareSalon() = 0;
};
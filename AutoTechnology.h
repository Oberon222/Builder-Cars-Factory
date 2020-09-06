#pragma once
#include<iostream>
#include<string>
#include"Conveyor.h"
using namespace std;

class AutoTechnology
{
	Conveyor* conveyor;
public:
	void SetConveyor(Conveyor* conv)
	{
		conveyor = conv;
	}

	Car* GetCar()const
	{
		return conveyor->GetMyCar();
	}

	void Configurate()
	{
		conveyor->CreateNewCar();

		conveyor->BuildBody();
		conveyor->InstallEngine();
		conveyor->InstallWheels();
		conveyor->Paint();
		conveyor->PrepareSalon();
	}

};
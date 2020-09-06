#include<iostream>
#include<string>
#include"AutoTechnology.h"
#include"MiniAutoTechnology.h"
#include"SportsCarTechnology.h"
#include"SUVTechnology.h"
using namespace std;


int main()
{
	AutoTechnology at;
	at.SetConveyor(new MiniAutoTechnology);
	at.Configurate();
	Car* car = at.GetCar();
	car->Show();

	system("pause");
	return 0;
}
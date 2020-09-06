#pragma once
#include<iostream>
#include<string>
using namespace std;

class Car
{
public:
	string body;
	string engine;
	string wheels;
	string paint;
	string salon;

	void Show()const
	{
		cout << "Car body: " << body << endl;
		cout << "Car engine: " << engine << endl;
		cout << "Car wheels: " << wheels << endl;
		cout << "Car paint: " << paint << endl;
		cout << "Car salon: " << salon << endl;
	}
};

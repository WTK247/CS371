#pragma once
#ifndef CRUISE_SHIPS_H
#define CRUISE_SHIPS_H
#include"Ships.h"
#include<iostream>
#include<string>
using namespace std;

class CruiseShip: public Ship
{
	private:
		int passengers;

	public:
		CruiseShip(string n, string y, int p) : Ship(n, y){ passengers = p; }

	virtual void print()
	{
		cout << "Ship's Name: " << getName() << " Maximum number of passengers: " << passengers << endl;
	}
};

#endif

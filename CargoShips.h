#pragma once
#ifndef CARGO_SHIPS_H
#define CARGO_SHIPS_H
#include<string>
#include<iostream>
#include "Ships.h"
using namespace std;

class CargoShip : public Ship
{
	private:
		int tonnage;

	public:
		CargoShip(string n, string y, int t): Ship(n, y) { tonnage = t; }

	virtual void print(){ cout << "Ship's Name: " << getName() << " and capacity: " << tonnage << " tonnage" << endl; }
};

#endif // CARGO_SHIPS_H

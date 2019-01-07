//main.cpp
//Created By: William Harrill
#include "Ships.h"
#include"CargoShips.h"
#include "CruiseShips.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i;

	//Array elements intialized with the addresses 
	//of dynamically allocated Ship, CruiseShip, and CargoShip objects
	Ship *ships[3] =
	{ 
		new Ship("Cruise","2015"),
		new CruiseShip("Ship","2016",2000),
		new CargoShip("Cargo","2017",4000)

	};

	//calling each object's print function
	for (i = 0; i < 3; i++)
		ships[i]->print();

	//pause the system
	system("pause");
	return 0;
}

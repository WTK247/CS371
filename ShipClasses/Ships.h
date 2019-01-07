#pragma once
#ifndef SHIPS_H
#define SHIPS_H
#include <string>
#include<iostream>

using namespace std;

class Ship
{
	private:
		string shipName, shipBuilt;

	public:
		//constuctor
		Ship(string name, string yearBuilt)
		{
			shipName = name;
			shipBuilt = yearBuilt;
		}

		//accessors and mutator methods
		string getName(){ return shipName; }
		string getBuilt(){ return shipBuilt; }

		//virtual print function that displays ships name and year it was built
		virtual void print(){cout << "Ship's Name: " << getName() << " and Year Built " << getBuilt() << endl;}


};
#endif //SHIPS_H

#include "PoliceOfficer.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include<iostream>
#include<vector>
using namespace std;

string line;

int main()
{
	int numTicketsIssued = 0;
	line.assign(50, '-');

	vector<ParkedCar> car{ ParkedCar("Porsche", "Cayenne", "Red", "GB1-9238", 480),
						  ParkedCar("Toyota", "Corolla", "Black", "GB2-23957", 25),
						  ParkedCar("Ford", "Mustang GT", "Yellow", "GB3-3927", 61),
						  ParkedCar("KIA", "Optima", "Maroon", "GB4-2397", 55) };

	vector<ParkingMeter> meter{ ParkingMeter(120),ParkingMeter(30),ParkingMeter(60),ParkingMeter(60) };

	PoliceOfficer officer;

	cout << "GRENN BAY POLICE DEPARTMENT - PARKING TICKET SIMULATOR\n";
	cout << line << "\n";
	cout << "Assign Patrol Officer\n";
	cin >> officer;

	for (size_t i = 0; i < meter.size(); i++)
	{
		if (officer.isViolator(meter[i], car[i]) == true)
		{
			officer.issueTicket(meter[i], car[i]);
			numTicketsIssued++;
		}
	}

	if (numTicketsIssued == 0){ cout << "Green Bay streets are safe!\n" << "There have been no parking violation reports."; }

	cin.get();
	cin.ignore();
	return 0;
}

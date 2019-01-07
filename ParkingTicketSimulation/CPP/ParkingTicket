#include"ParkingTicket.h"
#include<iomanip>
#include<iostream>
using namespace std;

ParkingTicket::ParkingTicket(const ParkedCar &car, const PoliceOfficer &officer, const ParkingMeter &meter)
{
	violator = car;
	parkingMeter = meter;
	issuer = officer;

	calcFine();
	printTicket();
}

void ParkingTicket::calcFine()
{
	int timeOver(1 + (violator.getMinutesParked() - parkingMeter.getTimePurchased()) / 60);

	if (timeOver < 2) { fine = Base_fine; }
	else 
	{ 
		fine = Base_fine + (Hourly_fine * timeOver);
		hourlyFine = fine - Base_fine;
	}
}

void ParkingTicket::printTicket()
{
	cout << "\nGREEN BAY WISCONSIN POLICE DEPARTMENT - PARKING VIOLATION NOTICE\n";
	cout << "Allowed parking time exceeded\n\n";
	cout << "Minutes Parked: " << violator.getMinutesParked() << "\n";
	cout << "Minutes Purchased: " << parkingMeter.getTimePurchased() << "\n";

	cout << "REPORTING OFFICER\n";
	cout << "-----------------------\n";
	cout << issuer << "\n";

	cout << "VIOLATOR\n";
	cout << "-----------------------\n";
	cout << violator << "\n";

	cout << fixed << setprecision(2);

	cout << "FINE\n";
	cout << "-----\n";

	if (getFine() == Base_fine){ cout << "Base Fine: GBPD " << Base_fine << "\n"; }
	else
	{
		cout << "Base Fine: GBPD " << Base_fine << "+\n";
		cout << "Hourly Fine: GBPD " << getHourlyFine() << "\n";
	}

	cout << "---------------------- - \n";
	cout << "Total Fine: GBPD " << getFine() << "\n\n\n";
}

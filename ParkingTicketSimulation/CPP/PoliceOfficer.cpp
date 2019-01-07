#include "ParkingTicket.h"
#include "PoliceOfficer.h"
#include<iostream>
using namespace std;

PoliceOfficer::PoliceOfficer(string nme, string ID){ setPoliceOfficer(nme, ID); }

void PoliceOfficer::setPoliceOfficer(string nme, string ID)
{
	if (!nme.empty()){ name = nme; }
	else{ name = "Mike Hawk"; }

	if (!ID.empty()) { badgeNumber = ID; }
	else { badgeNumber = "GBPD-9203429"; }
}

bool PoliceOfficer::isViolator(const ParkingMeter &meter, const ParkedCar &car)
{
	bool status = false;

	if (car.getMinutesParked() > meter.getTimePurchased()){ status = true; } return status;
}

void PoliceOfficer::issueTicket(const ParkingMeter &meter, const ParkedCar &car)
{
	ParkingTicket ticket(car, *this, meter);
	ticket.printTicket();
}

istream &operator >>(istream &iStrm, PoliceOfficer &obj)
{
	cout << "Officer Name: ";
	getline(iStrm, obj.name);
	cout << "Officer ID: ";
	getline(iStrm,obj.badgeNumber);

	obj.setPoliceOfficer(obj.name, obj.badgeNumber);
	return iStrm;
}

ostream &operator <<(ostream &oStrm, PoliceOfficer &obj)
{
	return oStrm << "Officer Name: " << obj.name << "\n"
		<< "Officer ID: " << obj.badgeNumber << "\n";
}

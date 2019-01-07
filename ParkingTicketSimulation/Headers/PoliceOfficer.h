#ifndef POLICE_OFFICER_H
#define POLICE_OFFICER_H
#include"ParkedCar.h"
#include"ParkingMeter.h"
#include<iostream>
#include<string>
using namespace std;

class ParkingTicket;

class PoliceOfficer
{
	private:
		string name;
		string badgeNumber;

	public:
		PoliceOfficer(){}
		PoliceOfficer(string, string);

		void setPoliceOfficer(string, string);
		bool isViolator(const ParkingMeter &, const ParkedCar &);
		void issueTicket(const ParkingMeter &, const ParkedCar &);

		friend istream &operator>>(istream &, PoliceOfficer &);
		friend ostream &operator<<(ostream &, PoliceOfficer &);
};
#endif //POLICE_OFFICER_H

#ifndef PARKING_TICKET_H
#define PARKING_TICKET_H
#include<iostream>
#include<string>
#include"PoliceOfficer.h"
using namespace std;

class ParkingTicket
{
	private:
		const double Base_fine = 25.0;
		const double Hourly_fine = 5.0;

		double fine;
		double hourlyFine;

		PoliceOfficer issuer;
		ParkedCar violator;
		ParkingMeter parkingMeter;

	public:
		ParkingTicket(){}

		ParkingTicket(const ParkedCar &, const PoliceOfficer &, const ParkingMeter &);

		void calcFine();
		void printTicket();

		double getFine(){ return fine; }
		double getHourlyFine(){ return hourlyFine; }
};
#endif //PARKING_TICKET_H

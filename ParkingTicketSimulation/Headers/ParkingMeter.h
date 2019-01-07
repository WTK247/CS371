#ifndef PARKING_METER_H
#define PARKING_METER_H
#include<iostream>
#include<string>
using namespace std;

class ParkingMeter
{
	private:
		int timePurchased; //amount of time entered in parking meter

	public:
		ParkingMeter(){}
		ParkingMeter(int minutes){ timePurchased = minutes; }

		int getTimePurchased() const{ return timePurchased; }

};
#endif //PARKING_METER_H

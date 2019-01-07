#ifndef PARKED_CAR_H
#define PARKED_CAR_H
#include<iostream>
#include<string>
using namespace std;

class ParkedCar
{
	private:
		string make,model, color, licenseNumber;
		int mParked;

	public:
		ParkedCar(){}
		ParkedCar(string, string, string, string, int);

		int getMinutesParked()const { return mParked; }

		friend ostream &operator <<(ostream &, const ParkedCar &);
};
#endif // !PARKED_CAR_H

#include"ParkedCar.h"

ParkedCar::ParkedCar(string carMake, string carModel, string carColor, string licNumber, int minutes)
{
	make = carMake;
	model = carModel;
	color = carColor;
	licenseNumber = licNumber;
	mParked = minutes;

}

ostream &operator<<(ostream &oStrm, const ParkedCar &obj)
{
	return oStrm << "Make: " << obj.make << "\n"
		<< "Model: " << obj.model << "\n"
		<< "Color: " << obj.color << "\n"
		<< "License Number: " << obj.licenseNumber << "\n";
}

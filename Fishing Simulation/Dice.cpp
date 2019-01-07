#include <array>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Dice.h"


Dice::Dice(int numSides)
{
	time_t seed = time(0);
	srand(static_cast<unsigned int>(seed));
	sides = numSides;
	roll();
}

void Dice::roll()
{
	const int MIN_VALUE = 1;
	value = (rand() % (getSides() - MIN_VALUE + 1)) + MIN_VALUE;
}

int Dice::getSides() {return sides;}
int Dice::getValues() {return value;}

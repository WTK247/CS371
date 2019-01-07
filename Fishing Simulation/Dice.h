#pragma once
#ifndef DICE_H
#define DICE_H

using namespace std;

class Dice
{
private:
	int sides, value;
	int Die_sides = 6;
public:
	Dice(int = 6); 
	void roll();
	int getSides();
	int getValues();
};
#endif

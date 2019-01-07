#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include "Dice.h"
using namespace std;

//function prototypes
void playGame();
bool cast_again();
void score();

//variables
const int DIE_SIDES = 6;
Dice die(DIE_SIDES);
int smallFish = 5, mediumFish = 10, largeFish = 15, seaWeed = -5, boots = -10, toiletSeat = -20;
int sF = 0, mF = 0, lF = 0, sW = 0, bO = 0, tS = 0;
double total = 0;
char choice, cast;
string fish, line;

void playGame()
{
	line.assign(50, '-');
	int round = 0;

	die.roll();

	if (die.getValues() == 1)
	{
		fish = "a Small Fish";
		total += smallFish;
		round = smallFish;
		sF++;
	}
	if (die.getValues() == 2)
	{
		fish = "a Medium Fish";
		total += mediumFish;
		round = mediumFish;
		mF++;
	}
	if (die.getValues() == 3)
	{
		fish = "a Large Fish";
		total += largeFish;
		round = largeFish;
		lF++;
	}
	if (die.getValues() == 4)
	{
		fish = "Sea Weed";
		total += seaWeed;
		round = seaWeed;
		sW++;
	}
	if (die.getValues() == 5)
	{
		fish = "a pair of Boots";
		total += boots;
		round = boots;
		bO++;
	}
	if (die.getValues() == 6)
	{
		fish = "a Toilet Seat";
		total += toiletSeat;
		round = toiletSeat;
		tS++;
	}
}
void score()
{

	cout << "You have ended the Game!" << endl;
	cout << line << endl;
	cout << "You caught a total of: " << sF << "Small Fish " << " Added Total = " << (sF * 5) << endl;
	cout << "\nYou caught a total of: " << mF << "Medium Fish " << " Added Total = " << (mF * 10) << endl;
	cout << "\nYou caught a total of: " << lF << "Large Fish " << " Added Total = " << (lF * 15) << endl;
	cout << "\nYou caught a total of: " << sW << "Piles of Sea Weed. " << " Added Total = " << (sW * -5) << endl;
	cout << "\nYou caught a total of: " << bO << "Pair of Boots. " << " Added Total = " << (bO * -10) << endl;
	cout << "\nYou caught a total of: " << tS << "Toilet Seats. " << " Added Total = " << (tS * -15) << endl;
	cout << line << endl;
	cout << "Your Total Score is: " << total << " points!" << endl;
}
bool cast_again()
{
	char again;
	cout << "Nice Cast! You caught " << fish << endl;

	do
	{
		cout << "\nWould you like to cast again [Y/N]: ", cin >> again;
		again = toupper(again); //setting input to upper case to avoid lower case y or n
	} 
	while (again != 'Y' && again != 'N');
	if (again == 'Y');
	else return false;
}

void main()
{
	line.assign(50, '-');
	cout << "Fishing Simulation!" << endl;
	cout << line << endl;
	
	do 
	{
		playGame();
	} 
	while (cast_again()); score();
	system("pause");
}

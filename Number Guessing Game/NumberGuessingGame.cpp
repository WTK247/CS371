// NumberGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Created By: William Harrill

#include <iostream>
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Program begins the main function
int main()
{
	//variables
	int guessNum, randNum;
	int count = 0;

	//generate random number
	randNum = 1 + rand() % 100;

	//do while loop to find the generated number
	do
	{
		cout << "Enter your guessing number between 1 and 100: ", cin >> guessNum;

		if (guessNum > randNum)
		{
			cout << "Too high, try again." << endl;
		}
		if (guessNum < randNum)
		{
			cout << "Too low, try again." << endl;
		}
	} while (guessNum != randNum);
	cout << "Congrats! your guess was correct" << endl;
	system("pause");
	return 0;
}

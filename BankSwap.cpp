// BankSwap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/* Eli Beutler
July 24th, 2022
Bank Swap
*/
#include <iostream> // standard
#include <cstdlib> // for random
#include <ctime> // for random
#include <Windows.h> // for beep
#include <fstream> // for accessing other files
#include <string> // for string stuff life funding number of vowels
#include <vector> // for vector functionality
#include <cctype> // allows for differentiation between capital and lowercase

using namespace std; //allowing for certain formatting within code below


//Declared Funtions

int monopolyMan();
void shutDown();


//Varibles
int bankOfTerror = 50000000; // bank of terror's account
int joesCoffeeShop = 7; // joes coffee shop's account
int swapNotice = 0; // to denote on the second 


int main()
{
	srand(time(0)); // for setting randomizer
	//cout << "test" << endl;

	cout << "the bank of terror is making their move. We need to stop them, and conviently our freind Joe of Joes Coffee Shop needs our help. Time to have a bankers error in his favor." << endl;
	system("pause");
	while (joesCoffeeShop > -9000) // if it gets to that point joes coffee shop will shut down
	{
		monopolyMan();
		system("pause");
	}

	shutDown();
}

int monopolyMan() { // made to do the swap of account funds at the appropiate time.
	swapNotice = swapNotice + 1; // increase count of deposit numbers
	cout << endl;
	cout << "Deposit Number " << swapNotice << endl;
	cout << endl;

	// normal bank functions
	bankOfTerror = bankOfTerror + 500000; // constant money laundering
	joesCoffeeShop = joesCoffeeShop + (rand() % 9000);//potential profit
	joesCoffeeShop = joesCoffeeShop - 200; // consistent payments
	joesCoffeeShop = joesCoffeeShop - (rand() % 5000); //random breaks and fixes

	if (swapNotice == 2) { // the swap.
		cout << "IT IS TIME FOR THE SWAP" << endl;
		cout << endl;

		int& x = bankOfTerror; 
		int& y = joesCoffeeShop;
		int robinHood = x;
		int poorMansCoffee = y;
		joesCoffeeShop = robinHood;
		bankOfTerror = poorMansCoffee;
	}

	cout << "Bank of Terror: " << bankOfTerror << endl;
	cout << "Joe's Coffee Shop: " << joesCoffeeShop << endl;


	return swapNotice;
}


void shutDown() {
	// this is for the instance that Joe's coffee shop would go into too much debt.
	cout << endl;
	cout << endl;
	cout << "Joe's Coffee shop has gone out of business due to debt." << endl;
}
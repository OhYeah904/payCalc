/* This program is the firt draft of my pay calculator.
The goal is to calculate mine and Megan's pay check.
Factors we are looking at are taxes, insurance, overtime and sales.
The end result should be our combined pay with all of these factors taken out or added */

//Later I want to add a function to ask if it is PP 1 or 2 then calculate bills due and subtract this from the pay total

//Health and dental care is pre tax
//Vision post tax
//Tax is 20%



#include "stdafx.h"
#include <iostream>
#include <string>

// This function is for Aaron's info input
double info()
{
	using namespace std;
	double dental = 27.66;
	double vision = 15.61;
	double health = 103.08;
	double tax = 0.8;

	// Calculate hours * 12 and assign to aNormalHours
	cout << "Enter Aaron's normal hours: ";
	double aHours;
	cin >> aHours;
	double aNormalHours = aHours * 12;
	
	// Calculate OT hours * 18 and assign to aOTHours
	cout << "Enter Aaron's over time: ";
	double aOT;
	cin >> aOT;
	double aOTHours = aOT * 18;
	
	// Just raw dolar amount for sales
	cout << "Enter Aaron's sales pay out in dollars: ";
	double aSales;
	cin >> aSales;
	
	// Displays Aaron's pay added together
	cout << "Aaron's pay check should be: " << "$" << (aNormalHours + aOTHours + aSales) << endl << endl;

	// Calculate hours * 10 and assign to mNormalHours
	cout << "Enter Megan's normal hours: ";
	double mHours;
	cin >> mHours;
	double mNormalHours = mHours * 12;
	
	// Calculate OT hours * 15 and assign to mOTHours
	cout << "Enter Megan's over time: ";
	double mOT;
	cin >> mOT;
	double mOTHours = mOT * 18;
	
	// Just raw dolar amount for sales
	cout << "Enter Megan's sales pay out in dollars: ";
	double mSales;
	cin >> mSales;
	
	// Displays Megan's pay added together
	cout << "Megan's pay check should be: " << "$" << (mNormalHours + mOTHours + mSales) << endl << endl;
	
	//Combined total before tax
	double combined = (aNormalHours + aOTHours + aSales + mNormalHours + mOTHours + mSales);
	cout << "Your combined total is " << "$" << combined << " before tax" << endl << endl;
	
	//Combined total after tax and other deductions
	cout << "Your combined total is " << "$" << ((combined - dental - health)* tax) - vision << " after tax and all other deductions." << endl;
	
	cin.get();
	return 0;
}

int main()
{
	info();
	std::cin.get();
	return 0;
}

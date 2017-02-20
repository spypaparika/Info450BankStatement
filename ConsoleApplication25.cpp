// ConsoleApplication25.cpp : Defines the entry point for the console application.
//

// ConsoleApplication24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	double accountBalance, withdrawal = 0, deposit = 0, check = 0, userInput, endTotal;
	bool fact = true;
	char question;
	cout << "Please enter account balance" << endl;
	cin >> accountBalance;
	endTotal = accountBalance;
	cout << "Enter Transactions:" << endl;
	cout << "________________" << endl;

	while (fact == true)
	{
		cout << "(W)ithdrawal, (D)eposit, (C)heck, (Q)uit" << endl;
		cin >> question;
		if (question == 'W' || question == 'w')
		{
			cout << "Enter Amount for withdrawal-> ";
			cin >> userInput;
			withdrawal = withdrawal + userInput;
			endTotal = endTotal - userInput;
		}
		else if (question == 'D' || question == 'd')
		{
			cout << "Enter Amount for deposit-> ";
			cin >> userInput;
			deposit = deposit + userInput;
			endTotal = endTotal + userInput;
		}
		else if (question == 'C' || question == 'c')
		{

			cout << "Enter Amount for check -> ";
			cin >> userInput;
			check = check + userInput;
			endTotal = endTotal - userInput;
		}
		else if (question == 'Q' || question == 'q')
			fact = false;
		else
			cout << "Invalid Entry" << endl;
	}
	cout << "Transaction Summary: " << endl;
	cout << "___________________" << endl;
	cout << setw(right) << "Beginning Balance: " << fixed << setprecision(2) << accountBalance << endl;
	cout << "Total Deposits: " << fixed << setprecision(2) << deposit << endl;
	cout << "Total Withdrawls: " << fixed << setprecision(2) << withdrawal << endl;
	cout << "Total Checks: " << fixed << setprecision(2) << check << endl;
	cout << "___________________" << endl;
	cout << "Ending Balance: " << fixed << setprecision(2) << endTotal << endl;

}

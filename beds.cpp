#include "beds.h"
#include <iostream>
#include <Windows.h>
#include "menu.h"
#include <iomanip>

using namespace std;

float beds::fcost;

beds::beds()
{
	choice = 0;
	days = 0;
	cost = 0.0;
	hire = 0;
}

void beds::beddetails()
{     //function for printing the information of the beds, the user can make a decision about one, it has a value that will be needed in the billing section
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t   Natural comfort to soothe your soul." << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t    *************************************" << endl;
	cout << "\n\n\t\t\t\t\t\t\t\t\t          -----------------Saikang Medical Beds-----------------" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t\t\t        | 1. Standard bed - 15$ per day                         |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t        | 2. Birthing Bed - 20$ per day                         |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t        | 3. Five Function Electric Hospital Bed - 25$ per day  |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t        | 4. Return to Main Menu                                |";
	cout << "\n\t\t\t\t\t\t\t\t\t        ---------------------------------------------------------" << endl;
	
	cout << "\n\n\t\t\t\t\t\t\t\t\t          Enter which kind of bed do you need: ";
	cin >> choice;

	cout << "\n\n\t\t\t\t\t\t\t\t\t          How many days do you need to stay? ";
	cin >> days;
	system("CLS");
	//user choose the bed
	if (choice == 1)
	{
		cost = days * 15;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(85)  <<""<< endl;
		cout << "\n\t\t\t\t\t\t\t\t\tYou selected <<Standard Bed>> with a total cost of: " << cost << "$ for " << days << " days" << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tPress 1 to select this bed." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tPress 2 to select another one." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(85) << "" << endl;
		cin >> hire;
		system("CLS");
		if (hire == 1)
		{
			fcost = cost;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(85) << "" << endl;
			cout << "\n\t\t\t\t\t\t\t\t\tYou succesfully reserved the <<Standard Bed>> for: " << days << " days" << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tGo to the menu into the billing section." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(85) << "" << endl;
		}
		else if (hire == 2)
		{
			beddetails();
		}
		else {
			cout << "Invalid input" << "Redirecting...please wait" << endl;
			Sleep(999);
			system("CLS");
			beddetails();
		}
	}

	else if (choice == 2)
	{
		cost = days * 20;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(85) << "" << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\tYou selected <<Birthing Bed>> with a total cost of: " << cost << "$ for " << days << " days " << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tPress 1 to select this bed." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tPress 2 to select another one." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(85) << "" << endl;
		cin >> hire;
		system("CLS");
		if (hire == 1)
		{
			fcost = cost;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(85) << "" << endl;
			cout << "\n\t\t\t\t\t\t\t\t\tYou succesfully reserved the Birthing Bed for: " << days << " days " << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tGo to the menu into the billing section." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(85) << "" << endl;
		}
		else if (hire == 2)
		{
			beddetails();
		}
		else {
			cout << "Invalid input" << "Redirecting...please wait" << endl;
			Sleep(999);
			system("CLS");
			beddetails();
		}
	}

	else if (choice == 3)
	{
		cost = days * 25;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t    You selected <<Five Function Electric Hospital Bed>> with a total cost of: " << cost << "$ for " << days << " days " << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t   Press 1 to select this bed." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t   Press 2 to select another one." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cin >> hire;
		system("CLS");
		if (hire == 1)
		{
			fcost = cost;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(85) << "" << endl;
			cout << "\n\t\t\t\t\t\t\t\t\tYou succesfully reserved the Five Function Electric Hospital Bed for: " << days << " days " << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tGo to the menu into the billing section." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(85) << "" << endl;
		}
		else if (hire == 2)
		{
			beddetails();
		}
		else {
			cout << "Invalid input" << "Redirecting...please wait" << endl;
			Sleep(999);
			system("CLS");
			beddetails();
		}
	}
	else if (choice == 4)
	{
		menu::Menu();
	}
	else {
		cout << "Invalid input" << "Redirecting...please wait" << endl;
		Sleep(999);
		system("CLS");
		menu::Menu();
	}
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t Press 1 to go to the main menu." << endl;
	cin >> hire;
	if (hire == 1)
	{
		menu::Menu();
	}
	else
	{
		menu::Menu();
	}
}

beds::~beds()
{
}

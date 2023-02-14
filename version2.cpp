#include "version2.h"
#include <iostream>
#include <sstream>
#include"version.h"
#include <fstream>
#include "menu.h"

using namespace std;

void submenu::menu2()
{
	string line = " ";
	ifstream readFile("userandpassword2.txt");
	string username;
	string password;
	string _username;
	string _password;
	int i, MenuChoice = 0;
	// define three queues
	queue departments[3];
	// set department names
	strcpy_s(departments[0].DepartmentName, "Emergency");
	strcpy_s(departments[1].DepartmentName, "Surgery");
	strcpy_s(departments[2].DepartmentName, "Psychiatric Ward");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-------------------------" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\tUsername: ";
	cin >> username;
	cout << "\t\t\t\t\t\t\t\t\t\t\t-------------------------" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\tPassword: ";
	cin >> password;
	cout << "\t\t\t\t\t\t\t\t\t\t\t-------------------------" << endl;



	bool found = false;
	while (getline(readFile, line)) {

		stringstream iss(line);
		iss >> _username >> _password;

		if (username == _username && password == _password) {
			cout << "\n\t\t\t\t\t\t\t\t\t\t\tLogin Successfully!" << endl;
			cin.get();
			found = true;
			break;
			cin.get();
			system("CLS");
			menu2();


		}
		else if (!found)
		{
			cin.get();

			cout << "\n\t\t\t\t\t\t\t\t\t\t\tInvalid Username and/or Password" << endl;
			cout << "\n\t\t\t\t\t\t\t\t\t\t\tPlease verify your email!" << endl;
			cin.get();
			break;
		}
	}
		while (found != false)
		{
			
			system("CLS");
			// print menu
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t        --------" << endl;
			cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ | Queue | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t        --------" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\tEnter your choice: ";
			for (i = 0; i < 3; i++)
			{
				// write menu item for department i
				cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << (i + 1) << ":  " << departments[i].DepartmentName;
				cout << "\n\t\t\t\t\t\t\t\t\t\t";
			}
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t4:  Exit";
			// get user choice
			MenuChoice = queue::ReadNumber();
			
			if (MenuChoice >= 1 && MenuChoice <= 3)
			{
				// call submenu for department
				// pointer arithmetics
				//queue::DepartmentMenu();
				queue::DepartmentMenu(departments + (MenuChoice - 1));
				
			}
			else
			{
				system("CLS");
				menu::Menu();
			}
		}
	
}

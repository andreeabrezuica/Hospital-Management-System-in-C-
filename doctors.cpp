#include "doctors.h"
#include <iostream>
#include <fstream>
#include "menu.h"

using namespace std;

doctors::doctors()
{
	code = 0; //initialization
	salary = 0;
	nmb = 0;
	code = 0;
}

void doctors::dinfo()
{ //function for writing the data in a file;
	system("CLS");
	ofstream out("database2.txt", ios::app);
	{


		cout << "Dear, doctor, please enter your enrole number:" << endl;
		cin >> nmb;
		cout << "Your name,sir" << endl;
		cin.get();
		cout << "First name:" << endl;
		cin >> name1;
		cout << "Last name:" << endl;
		cin >> name2;
		cout << "Your medical specialty:" << endl;
		cin >> specialty;
		cout << "Code:" << endl;
		cin >> code;
		cout << "Salary:" << endl;
		cin >> salary;
		cout << "Phone number(for verification):" << endl;
		cin >> phone;
	}
	out << "\nEnrole number:" << nmb << "\nName:" << name1 << "\n" << name2 << "\nMedical specialty" << specialty << "\nCode:" << code << "\nSalary:" << salary << "\nPhone number:" << phone << endl;
	out.close();
	cin.get();
	cout << "\nSuccesfully saved\n\n Our details are now in our database." << endl;
	menu::Menu();
}

void doctors::dsinfo()
{ 
	//function for showing the data on the screen;
	system("CLS");
	ifstream in("database2.txt");
	{
		if (!in)
		{
			cout << "ERROR!" << endl;
			menu::Menu();
		}
		while (!(in.eof()))
		{
			
			in.getline(toti, 999);
			cout << "\t\t\n" << toti << endl;
		}
		cin.get();
		cin.get();
		in.close();

	}
}
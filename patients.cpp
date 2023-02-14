//functions for patients class
#include <iostream>
#include <fstream>
using namespace std;
#include "patients.h"
#include "menu.h"

int patients::id;

patients::patients()
{
	age = 0;
	number = 0;
	id = 0;
}

void patients::info()
{

	ofstream out("database.txt", ios::app);
	{

		
		cout << "\t\t\t\t\t\tDear, patient, please enter your ID:";
		cin >> id;
		cout << "\n\n\t\t\t\t\t\tYour name,sir";
		cin.get();
		cout << "\n\n\t\t\t\t\t\tFirst name:";
		cin >> fname;
		cout << "\n\n\t\t\t\t\t\tLast name:";
		cin >> lname;
		cout << "\n\n\t\t\t\t\t\tYour age:";
		cin >> age;
		cout << "\n\n\t\t\t\t\t\tGender:";
		cin >> gender;
		cout << "\n\n\t\t\t\t\t\tBlood group:";
		cin >> blood;
		cout << "\n\n\t\t\t\t\t\tAdress:";
		cin >> address;
		cout << "\n\n\t\t\t\t\t\tPhone number:";
		cin >> number;
		
	}
	out << "\n\nId:" << id << "\n\nName:" << fname << "\n" << lname << "\n\nAge" << age << "\n\nGender:" << gender << "\n\nBlood group:" << blood << "\n\nAdress:" << address << "\n\nPhone number:" << number << endl;
	out.close();
	
	cout << "\n\n\n\n\t\t\t\t\tSuccesfully saved\n\n\t\t\t\t\t Our details are now in our database." << endl;
	cin.get();
	menu::Menu();
}

void patients::sinfo()
{
	ifstream in("database.txt");
	{
		if (!in)
		{
			cout << "ERROR!" << endl;
		}
		while (!(in.eof()))
		{
			in.getline(all,999);
			
			cout<<"\t\t\n" << all << endl;
			
		}
		cin.get();
		in.close();

	}
}

patients::~patients()
{
}

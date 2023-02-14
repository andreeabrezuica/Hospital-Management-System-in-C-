#pragma once
#include <iostream>
using namespace std;

class doctors
{
public:
	doctors();
	string name1, name2, specialty; //stores data like the name, specialty;

	int  nmb, code,phone;  //stores data like enrole number, code,
	                               //phone number;
	double salary;
	char toti[999]; //stores all the information;

	void dinfo();  //function for writing the data in a file;

	void dsinfo(); //function for showing the data on the screen;
};
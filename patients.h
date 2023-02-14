#pragma once

#include <string>
using namespace std;

class patients
{ 
    public:
	patients();
	string fname,lname, gender, address,blood;  //stores data like the name, 
	                                           //gender, blood group, adress;
	
	int age, number; //stores data like age, phone number;
	
	static int id; //stores the id of the patient
	               //(it will be used in the billing section);

	char all[999]; //stores all the information;

	void info();  //function for writing the data in a file;

	void sinfo(); //function for showing the data on the screen;

	~patients();
};
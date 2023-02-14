#pragma once
#include "appointment.h"
#include "beds.h"
#include "patients.h"
class billing : public appointment, public beds, public patients //inheritance
{  
    public:

	void printR(); //function for writing the receipt in a file
	void showR();  //function for printing the receipt on the 
	               //screen
};
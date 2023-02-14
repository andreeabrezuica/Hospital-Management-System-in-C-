#pragma once

class appointment
{

public:
	appointment();

	int section; //take input from user;
	             //he can choose the section that he needs
	
	int doctor; //take input from user;
	            //he can choose the doctor that he needs
	
	static float serviceC; //stores the price for the 
	                       //service
	
	void sections(); // function for printing, choosing the
	                 // section, stores a value needed in
	                 // a later section(billing)
	
	~appointment();
};
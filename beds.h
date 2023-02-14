#pragma once


class beds
{
public:
	beds();
	int choice; //take input from user;
	            //he can choose the beds that he needs

	float days; //take input from user;
	            //he can enter the days that he wants to stay

	float cost; //stores the price for the bed

	void beddetails(); //function for printing the information
	                   //of the beds, the user can make a decision
	                   //about one, it has a value that will be 
	                   //needed in the billing section
	int hire; //take input from user;
	          //it stores a value for 1.selecting the right bed
	          //or 2. going back to all of the beds
	
	static float fcost; //stores the final price

	~beds();
};
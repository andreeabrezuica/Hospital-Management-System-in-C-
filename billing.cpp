#include "billing.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include "menu.h"
using namespace std;

void billing::printR()
{       //function for writing the receipt in a file
	ofstream outo("receipt.txt");
	{
	    outo<< "\n\t\t\t\t\t\t\t\t\t-----------------Athena Health Hospital-----------------" << endl;
		outo << "\n\t\t\t\t\t\t\t\t\t-----------------The receipt-----------------" << endl;
		outo<< "\n\t\t\t\t\t\t\t\t\tYour ID:" << patients::id << endl;
		outo << "\n\t\t\t\t\t\t\t\t\tYou have to pay:\t\t" << endl;
		outo << "\n\t\t\t\t\t\t\t\t\tService Cost:\t\t" << fixed << setprecision(2) << appointment::serviceC << endl;
		outo << "\n\t\t\t\t\t\t\t\t\tBed Cost:\t\t" << fixed << setprecision(2) << beds::fcost << endl;
		cin.get();


		outo << "\n\n\n\n\t\t\t\t\t\t\t\t\t*************************************************" << endl;
		outo << "\n\n\n\t\t\t\t\t\t\t\t\tTotal Charge:\t\t" << fixed << setprecision(2) << appointment::serviceC + beds::fcost << "$" << endl;
		outo << "\n\n\n\n\t\t\t\t\t\t\t\t\t*************************************************" << endl;
		outo << "\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------THANK YOU-----------------" << endl;
		cin.get();
	}
	outo.close();
	//menu::Menu();

}

void billing::showR()
{ //function for printing the receipt on the screen
	ifstream ino("receipt.txt");
	{
		if (!ino)
		{
			cout << "ERROR!" << endl;
		}
		while (!(ino.eof()))
		{
			ino.getline(all, 999);
			cout << all << endl;
			
		}
		cin.get();
	}
	ino.close();

	

}
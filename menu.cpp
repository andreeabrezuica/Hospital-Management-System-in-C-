#include "menu.h"
#include <iomanip>
#include "WaitingList.h"
#include "waitingMenu.h"
#include "version2.h"

void menu::Help()
{
	int help;
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       We are here to help you!     | -----------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\t\t\t\t\t\t\t\t             1. App description" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\t\t\t\t\t\t\t\t             2. How the sections work?" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;

	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\t\t\t\t\t\t\t\t             3. Why we should use the app, instead of book an appointment direct at the hospital? " << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\t\t\t\t\t\t\t\t            4.Return to Main Mneu" << endl;
	cin >> help;
	if (help == 1)
	{
		system("CLS");
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
		cout << "\t\t\t\t\t    Hospital management system is a computer system that helps manage the information related to health care \n\n\t\t\t\t\t    and aids in the job completion of health care providers effectively." << endl;
		cout << "\n\n\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
		cin.get();
		cin.get();
		system("CLS");
		Help();
	}
	else if (help == 2)
	{
		system("CLS");
		cout << "\n\n\n\n\n\n--------------------------------------------------------------------------------- |      Patients Management&Doctors Management    | ------------------------------------------------------------------------------" << endl;
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
		cout << "\t\t\t\t\t    ->In this section, you can enter your personal information, things like your id, name, adress, phone number, etc.\n\n\t\t\t\t\t    ->Our system will store your data and it will be used as long as you stay in our hospital.\n\n\t\t\t\t\t    ->NOTE: Your personal informations won't be used in any way that can harm you and they will not be told to others\n\n\t\t\t\t\t      (companies, publicity,etc.). " << endl;
		cout << "\n\n\t\t\t\t\t    ->If you have software problems, please contact andreea.brezuica@student.unitbv.ro " << endl;
		cout << "\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
		cin.get();


		cout << "\n\n\n\n\n\n--------------------------------------------------------------------------------- |      Beds Management    | ---------------------------------------------------------------------------------------------------" << endl;
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
		cout << "\t\t\t\t\t    ->In this section, you can reserve a bed suitable for your medical needs.You just need to choose the convenient one and\n\n\t\t\t\t\t      we will take care of you.\n\n\t\t\t\t\t    ->NOTE:You can consult with our operator(208-638-6891) for a more beneficial choice." << endl;
		cout << "\n\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
		cin.get();



		cout << "\n\n\n\n\n\n--------------------------------------------------------------------------------- |      Appointment    | -----------------------------------------------------------------------------------------------------" << endl;
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
		cout << "\t\t\t\t\t    ->Here, you can see all the sections that works in our hospital and you can make an appointment for a consultation\n\n\t\t\t\t\t      with the specialist that lead the section. \n\n\t\t\t\t\t     ->Once you selected a choice, our operator will call you and set a date favorable both for you and\n\n\t\t\t\t\t      for the doctor.\n\n\t\t\t\t\t     ->We guarantee that we have the best doctors and assistants who will take care of you and your needs." << endl;
		cout << "\n\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
		cin.get();


		cout << "\n\n\n\n\n\n--------------------------------------------------------------------------------- |      Charges&Bill    | -------------------------------------------------------------------------------------------------" << endl;
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
		cout << "\t\t\t\t\t    ->In this section, you can notice your beds&appointments total price to see if it fits your budget, or you can call our\n\n\t\t\t\t\t      operator(816-324-6013) to make a plan for an installment payment." << endl;
		cout << "\n\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
		cin.get();
		system("CLS");
		Help();
	}
	else if (help == 3)
	{
		system("CLS");
		cin.get();
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t" << setfill('+') << setw(129) << " " << endl;
		cout << "\n\n\t\t\t\t\t      ->Using the application makes it much easier for both, us and you.\n\n\t\t\t\t\t      ->This way, if you enter your data yourself, our operators will have more time to focus on existing issues and\n\n\t\t\t\t\t       efficient patient scheduling.\n\n\t\t\t\t\t      ->In addition, you can see the total cost so you know what to expect and you can select the doctors according to your needs." << endl;
		cout << "\n\t\t\t\t\t" << setfill('+') << setw(129) << " " << endl;
		cin.get();
		Help();
	}
	else if (help == 4)
	{
		Menu();
	}
	else
	{
		cout << "Invalid Input! Redirecting...please wait" << endl;
		Sleep(1100);
		system("CLS");
		Menu();
	}
}
void menu::Menu()
{
	{
		int nChoice = 0;
		int sChoice = 0;
		int gmenu = 0;
		int help = 0;
		cout << endl;
		
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t                                    A              HHHHH       HHHHH      HHHHH       HHHHH                                 " << endl;
		cout << "\t\t\t\t\t\t\t\t                                   AAA             H:::H       H:::H      H:::H       H:::H                          " << endl;
		cout << "\t\t\t\t\t\t\t\t                                  A:::A            H:::H       H:::H      H:::H       H:::H                        " << endl;
		cout << "\t\t\t\t\t\t\t\t                                 A:   :A           H:::H-H-H-H-H:::H      H:::H-H-H-H-H:::H                              " << endl;
		cout << "\t\t\t\t\t\t\t\t                                A-A-A-A-A          H:::::::::::::::H      H:::::::::::::::H         " << endl;
		cout << "\t\t\t\t\t\t\t\t                               A:::::::::A         H:::H-H-H-H-H:::H      H:::H-H-H-H-H:::H        " << endl;
		cout << "\t\t\t\t\t\t\t\t                              A A-A-A-A-A-A        H:::H       H:::H      H:::H       H:::H     " << endl;
		cout << "\t\t\t\t\t\t\t\t                             A::         ::A       H:::H       H:::H      H:::H       H:::H       " << endl;
		cout << "\t\t\t\t\t\t\t\t                            A::           ::A   .. H:::H       H:::H   .. H:::H       H:::H ..       " << endl;
		cout << "\t\t\t\t\t\t\t\t                           AAA             AAA  .. HHHHH       HHHHH   .. HHHHH       HHHHH ..        " << endl;
		

		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Athena Health Hospital                 " << endl;
		
		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     -Welcome to our management system!                 " << endl;
		
		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     -Stay Safe!                 " << endl;
		cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     ---------------------------------                 ";
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     24/7 Assistance:956-631-7518                 " << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t             Emergencies:215-601-7963                 " << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     --------------------------------                 " << endl;
		
		cin.get();
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t        -----------" << endl;
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ | Main Menu | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t        -----------" << endl;

		cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t ___________________________________________" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t|\t\t\t\t\t    |" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t| Patients Management              ->    1  |" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t| Beds Management                  ->    2  |" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t| Appointments                     ->    3  |" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t| Charges&Bill                     ->    4  |" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t| Waiting List                     ->    5  |" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t| Help                             ->    6  |" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t| Exit                             ->    7  |" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t|\t\t\t\t\t    |\t" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t|___________________________________________|" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\tEnter your choice: ";
		cin >> nChoice;
		cout << "\n\n\n";
		cin.get();
		cout << setfill('^') << setw(200) << " " << endl;
		cin.get();
		system("CLS");

		patients s;
		doctors sm;
		beds s1{};
		appointment s2{};
		billing s3;
		submenu s4;
		

		if (nChoice == 1)
		{
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t        ---------------------" << endl;
			cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ | Patients Management | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t        ---------------------" << endl;
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t|  1. Enter New Patient Record     |" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t|  2. See Old Patient Record       |" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t|  3. Return to Main Menu          |" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t------------------------------------" << endl;


			cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tEnter choice: ";
			cin >> sChoice;
			cin.get();
			cout << setfill('^') << setw(200) << " " << endl;
			cin.get();
			system("CLS");
			if (sChoice == 1)
			{
				s.info();
			}
			else if (sChoice == 2)
			{
				s.sinfo();
			}
			else if (sChoice == 3)
			{
				Menu();
			}
			else
			{
				/*cout << "\t\t\t\t\t\t\t\t\t\t\tInvalid Input! Redirecting...please wait" << endl;
				Sleep(100);
				.get();
				system("CLS");*/
				Menu();
				
			}
			cout << "Press 1 for redirecting to the main menu" << endl;
			if (gmenu == 1)
			{
				Menu();
			}

			else
			{
				Menu();
			}
		}
		/*else if (nChoice == 2)
		{
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t        -------------------" << endl;
			cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ | Doctor Management | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t        -------------------" << endl;
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t|  1. Enter New Doctor Record      |" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t|  2. See Old Doctor Record        |" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t|  3. Return to Main Menu          |" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t------------------------------------" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tEnter choice: ";
			cin >> sChoice;
			system("CLS");

			if (sChoice == 1)
			{
				sm.dinfo();
			}
			else if (sChoice == 2)
			{
				sm.dsinfo();
			}
			else
			{
				cout << "Invalid Input! Redirecting...please wait" << endl;
				Sleep(1100);
				system("CLS");
				Menu();
			}
			cout << "Press 1 for redirecting to the main menu" << endl;
			if (gmenu == 1)
			{
				Menu();
			}

			else
			{
				Menu();
			}

		}*/

		else if (nChoice == 2)
		{
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t        -----------------" << endl;
			cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ | Beds Management | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t        -----------------" << endl;
			
			cin.get();
			s1.beddetails();
		}

		else if (nChoice == 3)
		{
		cout << "\t\t\t\t\t\t\t\t\t\t\t        -------------------------" << endl;
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ | Appointments Management | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
		
			
			cout << "\t\t\t\t\t\t\t\t\t\t\t        -------------------------" << endl;
			cin.get();
			s2.sections();
		}

		else if (nChoice == 4)
		{
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ | Charges&Bill | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
			
			s3.printR();
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\t\t\t\t\t\t\t\t             Your receipt print is ready.Check it out on the file path." << endl;
			cout << "\n\t\t\t\t\t\t\t\t             Press 1 to display the receipt on the screen or another key to return to the menu." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cin >> gmenu;
			if (gmenu == 1)
			{
				system("CLS");
				s3.showR();
				cin.get();
				system("ClS");
				Menu();
			}
			else
			{
				Menu();
			}

		}
		else if (nChoice == 5)
		{
		s4.menu2();
 }
		else if (nChoice == 6)
		{
		 Help();
			
		}
		else if (nChoice == 7)
		{
		cin.get();
		    cout << "\n\n\n\n\n\n\n\t\t\t\t\t" << setfill('*') << setw(129) << " " << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t      Goodbye! Have a nice day!\n";
			cout << "\n\t\t\t\t\t" << setfill('*') << setw(129) << " " << endl;
			cin.get();
			
			system("ClS");
			//menu();
		}
		else
		{
			cout << "Invalid Input! Redirecting...please wait" << endl;
			Sleep(1100);
			system("CLS");
			Menu();
		}

	}
}



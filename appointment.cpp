#include "appointment.h"
#include "beds.h"
#include "billing.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include "menu.h"
#include <iomanip>
using namespace std;
float appointment::serviceC;



appointment::appointment()
{
	section = 0;
	doctor = 0;
}

void appointment::sections()
{
	//   function for printing, choosing the section, stores a value needed in a later section(billing)
	string Sname[] = {"Cardiology","Dermatology","Emergencies","Endocrinology","ENT(Otolaryngology)","Gynecology","Hemodialysis","Maternity Care","Neurosurgery","Dietetics & Nutrition","Ophthalmology","Radiology","Surgery"};

	//printing the sections
	for (int i = 0; i < 13; i++)
	{
		cout <<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t" << (i + 1) << "." << Sname[i]<<"\n" << endl;
		
		cout << setfill('^') << setw(227);
	}
	cout << "^^^^" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t-------------------------------------------------------------------------------------" << endl;
	cout << "\n\t\t\t\t\t\t\t\t|  The above sections are prepared by our hospital to make you feel great again.    |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t|  Press any key to return back to menu.                                            |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t|  Enter a number of the section you want to make an appointment:                   | ";
	cout << "\n\t\t\t\t\t\t\t\t-------------------------------------------------------------------------------------";
	cin >> section;
	system("CLS");
	//the user choose the section
	if (section == 1)
	{
		cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Cardiology Section      | -----------------------------------------------------------------------------" << endl;
		cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
		cout << "\n         Cardiology is the study and treatment of disorders of the heart and the blood vessels. A person with heart disease or cardiovascular disease may be referred to a cardiologist.\n" << endl;
		cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

		
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mr. Balaram Asim" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t Schedule:10 A.M. - 8 P.M. \n\n\t\t\t\t\t\t\t\t\t\t Division: Cardiac Electrophysiology  \n\n \t\t\t\t\t\t\t\t\t\t Price:100$  \n\n " << endl;
		

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mrs. Freyja Ywain               " << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t Schedule:8 A.M. - 6 P.M.\n\n \t\t\t\t\t\t\t\t\t\t Division: Echocardiography\n\n \t\t\t\t\t\t\t\t\t\t Price:80$\n\n" << endl;
		

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mrs. Ilenia Vishal" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t Schedule:8 A.M. - 8 P.M.\n\n \t\t\t\t\t\t\t\t\t\t Division: Interventional cardiology\n\n \t\t\t\t\t\t\t\t\t\t Price: 120$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Ms. Gunda Ottorino" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t Schedule:12 P.M.- 11 P.M. \n\n \t\t\t\t\t\t\t\t\t\t Division: Nuclear Cardiology\n\n \t\t\t\t\t\t\t\t\t\t Price:100$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to return to the Main Menu." << endl;
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number)";
		cin >> doctor;
		cin.get();
		system("CLS");
		//the user choose the doctor
		if (doctor == 1)
		{
			serviceC = 100.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Balaram Asim." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else if (doctor == 2)
		{
			serviceC = 80.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Freyja Ywain." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else if (doctor == 3)
		{
			serviceC = 120.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Ilenia Vishal." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}
		else if (doctor == 4)
		{
			serviceC = 100.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Gunda Ottorino." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else
		{
			cout << "Invalid Input! Redirecting...please wait" << endl;
			Sleep(1100);
			system("CLS");
			sections();
		}
		int Mmenu;
		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu." << endl;
		cin >> Mmenu;
		if (Mmenu == 1)
		{
			menu::Menu();
		}
		else
		{
			menu::Menu();
		}

	}

	else if (section == 2)
	{
		cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Dermatology Section      | -----------------------------------------------------------------------------" << endl;
		cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
		cout << "\n         A dermatologist is a medical doctor who specializes in treating the skin, hair, and nails. Dermatologists care for people of all ages, from newborns to seniors.\n" << endl;
		cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mr. Sukhwinder Velvet" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Cosmetic Dermatology\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mr. Sandu Shantae" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Dermatopathology\n\n \t\t\t\t\t\t\t\t\t\t Price:150$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mrs. Shyamala Medrod" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:11 A.M. - 9 P.M.\n\n\t\t\t\t\t\t\t\t\t\t Division: Trichology\n\n \t\t\t\t\t\t\t\t\t\tPrice:80$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mr. Matty Stacee" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Immunodermatology\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t5.Mrs. Kenya Shell" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Mohs surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:80$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t6.Mr. Sree Lionesse" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 10 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Pediatric dermatology\n\n \t\t\t\t\t\t\t\t\t\tPrice:110$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t7.Mr. Manu Ursula" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Teledermatology\n\n \t\t\t\t\t\t\t\t\t\tPrice:90$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t8.Mrs. Meona'hane Suzy" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:7 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Dermatoepidemiology\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number)" << endl;
		cin >> doctor;

		if (doctor == 1)
		{
			serviceC = 100.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Sukwinder Velvet" << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else if (doctor == 2)
		{
			serviceC = 150.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Sandu Shantae." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else if (doctor == 3)
		{
			serviceC = 80.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Shyamala Medrod." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}
		else if (doctor == 4)
		{
			serviceC = 100.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Matty Stacee." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}
		else if (doctor == 5)
		{
			serviceC = 80.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Kenya Shell." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}
		else if (doctor == 6)
		{
			serviceC = 110.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Sree Lionesse." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else if (doctor == 7)
		{
			serviceC = 90.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Manu Ursula." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}
		else if (doctor == 8)
		{
			serviceC = 100.00;//price for the service
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Meona'hane Suzy." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else
		{
			cout << "Invalid Input! Redirecting...please wait" << endl;
			Sleep(1100);
			system("CLS");
			sections();
		}
		int Mmenu;
		cout << "Press 1 if you want to go to the main menu." << endl;
		cin >> Mmenu;
		if (Mmenu == 1)
		{
			menu::Menu();
		}
		else
		{
			menu::Menu();
		}
	}

	else if (section == 3)
	{
	    cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Emergency Section      | -----------------------------------------------------------------------------" << endl;
		cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
		cout << "\n          Due to the unplanned nature of patient attendance, the department must provide initial treatment for a broad spectrum of illnesses and injuries, some of which may be life-threatening and \nrequire immediate attention. \n" << endl;
		cout << "\n          We have 5 rooms dedicated for emergencies only:\n" << endl;
		cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t(NOTE:This is just an info zone,if is needed, please go to the hospital as soon as possible, our team is ready to take care of your emergency. )" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Emergency Department (ED)" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:non-stop\n \n\n\t\t\t\t\t\t\t\t\t\tOperator:Morgana Celinda\n \n\n \t\t\t\t\t\t\t\t\t\tPhone Number: 630-558-4946\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Accident and Emergency Department (A&E)" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:non-stop.\n \n\n\t\t\t\t\t\t\t\t\t\tOperator: Albert Kerri\n \n\n \t\t\t\t\t\t\t\t\t\tPhone Number: 630-558-4949\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Emergency Room (ER)" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:non-stop.\n \n\n\t\t\t\t\t\t\t\t\t\tOperator: Jun-Ho Nanuq\n \n\n \t\t\t\t\t\t\t\t\t\tPhone Number: 630-558-4948\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Emergency Ward (EW)" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:non-stop.\n \n\n\t\t\t\t\t\t\t\t\t\tOperator: Chiranjeevi Kennith\n \n\n \t\t\t\t\t\t\t\t\t\tPhone Number: 630-558-4945\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t5.Casualty Department" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:non-stop.\n \n\n\t\t\t\t\t\t\t\t\t\tOperator: Moacir Reena\n \n\n \t\t\t\t\t\t\t\t\t\tPhone Number: 630-558-4943\n\n" << endl;


		cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress any key to get back." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tNOTE: Every emergency is charged 150$." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tWhat do you want to know more about?";
        cin >> doctor;


		if (doctor == 1)
		{
			serviceC = 0.00;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t              You entered into the Emergency Department (ED) info zone.\n\n\t\t\t\t\t\t\t\t\t\tCardiac arrest" << endl;
			cout << "\n\nTreatment is basic life support and advanced life support as taught in advanced life support and advanced cardiac life support courses.\n\n" << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tStay safe!" << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else if (doctor == 2)
		{
			serviceC = 0.00;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t              You entered into the Accident and Emergency Department(A&E) info zone.\n\n\t\t\t\t\t\t\t\t\t\tHeart Attack" << endl;
			cout << "\n\nThey will receive oxygen and monitoring and have an early ECG; aspirin will be given if not contraindicated or not already administered\n by the ambulance team; morphine or diamorphine will be given for pain; sub lingual (under the tongue) or buccal (between cheek and upper gum) glyceryl trinitrate (nitroglycerin) (GTN or NTG) will be given, unless contraindicated by the presence of other drugs." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tStay safe!" << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else if (doctor == 3)
		{
			serviceC = 0.00;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t              You entered into the Emergency Room info zone.\n\n\t\t\t\t\t\t\t\t\t\t Trauma" << endl;
			cout << "\n\nTrauma is treated by a trauma team who have been trained using the principles taught in the internationally recognized Advanced Trauma Life Support (ATLS) course of the American College of Surgeons." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tStay safe!" << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}
		else if (doctor == 4)
		{
			serviceC = 0.00;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t              You entered into the Emergency Ward info zone.\n\n\t\t\t\t\t\t\t\t\t\t Mental Illness" << endl;
			cout << "\n\nPatients who appear to be mentally ill and to present a danger to themselves or others may be brought against their will to an emergency ward by law enforcement officers for psychiatric examination." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tStay safe!" << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}
		else if (doctor == 5)
		{
			serviceC = 0.00;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t              You entered into the Casualty Department info zone.\n\n\t\t\t\t\t\t\t\t\t\tAsthma and COPD" << endl;
			cout << "\n\nAcute exacerbations of chronic respiratory diseases, mainly asthma and chronic obstructive pulmonary disease (COPD), are assessed as emergencies and treated with oxygen therapy, bronchodilators, steroids or theophylline,\n have an urgent chest X-ray and arterial blood gases and are referred for intensive care if necessary." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tStay safe!" << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else
		{
			cout << "Invalid Input! Redirecting...please wait" << endl;
			Sleep(1100);
			system("CLS");
			sections();
		}
		int Mmenu;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu.";
		cin >> Mmenu;
		if (Mmenu == 1)
		{
			menu::Menu();
		}
		else
		{
			menu::Menu();
		}

	}
	else if (section == 4)
	{
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Endocrinology Section      | ---------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n          Endocrinology is the study of hormones. Hormones are essential for our every-day survival. They control our temperature, sleep, mood, stress, growth and more.\n" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mrs. Pippa Daniela" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 6 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Diabetes\n\n \t\t\t\t\t\t\t\t\t\tPrice:150$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mrs. Bonaccorso Andreea" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Endocrine Unit\n\n \t\t\t\t\t\t\t\t\t\tPrice:150$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mr. Hamnet Granuaile" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:11 A.M. - 9 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Lipid and Metabolism Associates\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mrs. Jaida Kiera" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Metabolism Unit\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t5.Mrs. Kelsi Genghis" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Neuroendocrine\n\n \t\t\t\t\t\t\t\t\t\tPrice:110$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t6.Mrs. Sandhya Amedea" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 10 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Reproductive Endocrine\n\n \t\t\t\t\t\t\t\t\t\tPrice:120$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t7.Mrs. Dusty Magnolia" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Thyroid\n\n \t\t\t\t\t\t\t\t\t\tPrice:200$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t8.Mrs. Roslyn Janie" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Endocrinology Fellowship Program\n\n \t\t\t\t\t\t\t\t\t\tPrice:500$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number)";
	cin >> doctor;
	system("CLS");

	if (doctor == 1)
	{
		serviceC = 150.00;
	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Pippa Daniela." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 2)
	{
		serviceC = 150.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Bonnacorso Andreea." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 3)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Hamnet Granuaile." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 4)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Jaida Kiera." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 5)
	{
		serviceC = 110.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Kelsi Genchis." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 6)
	{
		serviceC = 120.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Sansya Amedea." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 7)
	{
		serviceC = 200.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Dusty Magnolia." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t Our operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 8)
	{
		serviceC = 500.00;
	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Roslyn Janie." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t Our operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else
	{
		cout << "Invalid Input! Redirecting...please wait" << endl;
		Sleep(1100);
		system("CLS");
		sections();
	}
	int Mmenu;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu.";
	cin >> Mmenu;
	if (Mmenu == 1)
	{
		menu::Menu();
	}
	else
	{
		menu::Menu();
	}

	}


	else if (section == 5)
	{
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Otolaryngology Section      | -----------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n         Otolaryngologists are physicians that specialize in the treatment and management of diseases and disorders of the ear, nose, throat, and related bodily structures.\n" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mrs. Marinella Linet" << endl;
	cout << "\t\tSchedule:9 A.M. - 6 P.M.\n\n\t\t\t\t\t\t\t\t\t\t Division: Audiology & Communicative Disorders\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mrs. Daniela Shae" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Facial Plastic Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:150$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mrs. Jannah Mortimer" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:11 A.M. - 9 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Head & Neck Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mr. Hayden Warren" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Laryngology & Bronchoesophagology\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t5.Mr. Richie Kelsie" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Otology, Neurotology, & Skull Base Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t6.Mrs. Madelina Malvina" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 10 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Rhinology & Allergy\n\n \t\t\t\t\t\t\t\t\t\tPrice:90$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number)";
	cin >> doctor;
	system("CLS"); 

	if (doctor == 1)
	{
		serviceC = 100.00;
	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Marinella Linet." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 2)
	{
		serviceC = 150.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Daniela Shae." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 3)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Jannah Mortimer." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 4)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor JHayden Waren." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 5)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Richie Kelsie." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 6)
	{
		serviceC = 90.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Madelina Malvina." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else
	{
		cout << "Invalid Input! Redirecting...please wait" << endl;
		Sleep(1100);
		system("CLS");
		sections();
	}
	int Mmenu;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu.";
	cin >> Mmenu;
	if (Mmenu == 1)
	{
		menu::Menu();
	}
	else
	{
		menu::Menu();
	}

	}

	else if (section == 6)
	{
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Gynecology Section      | -----------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n         Gynecologists are doctors who specialize in women's health, with a focus on the female reproductive system. \n" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mrs. Romana Bernadine" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Cervical (Cone) Biopsy\n\n \t\t\t\t\t\t\t\t\t\tPrice:90$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mr. Singh Tullio" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Dilation and Curettage (D&C)\n\n \t\t\t\t\t\t\t\t\t\tPrice:80$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mr. Gilroy Remigio" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:11 A.M. - 9 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Endometrial or Uterine Biopsy\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mr. Felix Wilhelmina" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Hysterectomy\n\n \t\t\t\t\t\t\t\t\t\tPrice:70$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t5.Mrs. Raimonda Harsh" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Pelvic Ultrasound\n\n \t\t\t\t\t\t\t\t\t\tPrice:80$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t6.Mr. Jadyn Eufemia" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 10 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Toluidine Blue Dye Test\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t7.Mr. Cecilio Galen" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Uterine (artery) Fibroid Embolization (UFE)\n\n \t\t\t\t\t\t\t\t\t\tPrice:90$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t8.Mrs. Colombina Rayen" << endl;
	cout << "\\n\t\t\t\t\t\t\t\t\t\tSchedule:7 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Myomectomy\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number) ";
	cin >> doctor;

	if (doctor == 1)
	{
		serviceC = 90.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Romana Bernadine" << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 2)
	{
		serviceC = 80.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Singh Tullio." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 3)
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		serviceC = 100.00;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Gilroy Remigio." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 4)
	{
		serviceC = 70.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Felix Wilhelmina." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 5)
	{
		serviceC = 80.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Raymonda Harsh." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 6)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Jadyn Eufemia." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 7)
	{
		serviceC = 90.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Cecilio Galen." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 8)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Colombina Rayen." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else
	{
		cout << "Invalid Input! Redirecting...please wait" << endl;
		Sleep(1100);
		system("CLS");
		sections();
	}
	int Mmenu;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu. ";
	cin >> Mmenu;
	if (Mmenu == 1)
	{
		menu::Menu();
	}
	else
	{
		menu::Menu();
	}
	}

	else if (section == 7)
	{
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Hemodialysis Section      | -----------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;

	cout << "\n         Hemodialysis cleans the blood by cycling your blood through a machine that removes waste and toxins. It then returns the blood to your body.\n" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mr. Rene Hamilcar" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Hemodialysis\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mr. Conner Lorne" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 6 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Peritoneal dialysis\n\n \t\t\t\t\t\t\t\t\t\tPrice:80$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mr. Goffredo Kane" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Standard Home Hemodialysis\n\n \t\t\t\t\t\t\t\t\t\tPrice: 120$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mrs. Angela Felix" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 P.M.- 6 A.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Nightly Home Hemodialysis\n\n \t\t\t\t\t\t\t\t\t\tPrice:150$\n\n" << endl;

		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number) " ;
		cin >> doctor;


		if (doctor == 1)
		{
			serviceC = 100.00;
		 cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Rene Hamilcar." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else if (doctor == 2)
		{
			serviceC = 80.00;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Conner Lorne." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else if (doctor == 3)
		{
			serviceC = 120.00;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Goffredo Kane." << endl;
			cout << "\\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}
		else if (doctor == 4)
		{
			serviceC = 150.00;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
			cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Angela Felix." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
			cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		}

		else
		{
			cout << "Invalid Input! Redirecting...please wait" << endl;
			Sleep(1100);
			system("CLS");
			sections();
		}
		int Mmenu;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu. ";
		cin >> Mmenu;
		if (Mmenu == 1)
		{
			menu::Menu();
		}
		else
		{
			menu::Menu();
		}

	}
	else if (section == 8)
	{
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Maternity Care Section      | -----------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n          Maternity care refers to the health services provided to women, babies, and families throughout the whole pregnancy, during labour and birth, and after birth for up to six weeks.\n         It can include monitoring the health and well-being of the mother and baby, health education, and assistance during labour and birth.\n" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mrs. Giannina Sunita" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 6 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision:  Antenatal (pregnancy) Clinics\n\n \t\t\t\t\t\t\t\t\t\t Price:200$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mr. Dae-Jung Mauro" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Maternity wards\n\n \t\t\t\t\t\t\t\t\t\tPrice:170$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mr. Jordon Docia" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:12 P.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Birthing Units\n\n \t\t\t\t\t\t\t\t\t\tPrice: 180$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mrs. Maria Vittoria Paul" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 P.M.- 6 A.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Neonatal (baby) Units\n\n \t\t\t\t\t\t\t\t\t\tPrice:250$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number)";
	cin >> doctor;


	if (doctor == 1)
	{
		serviceC = 200.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Giannina Sunita." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 2)
	{
		serviceC = 170.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Dae-Jung Mauro." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 3)
	{
		serviceC = 180.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Jordon Docia." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 4)
	{
		serviceC = 250.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Maria Vittoria Paul." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else
	{
		cout << "Invalid Input! Redirecting...please wait" << endl;
		Sleep(1100);
		system("CLS");
		sections();
	}
	int Mmenu;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu. ";
	cin >> Mmenu;
	if (Mmenu == 1)
	{
		menu::Menu();
	}
	else
	{
		menu::Menu();
	}

	}


	else if (section == 9)
	{
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Neurosurgery Section      | -----------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n         It is the medical specialty concerned with the diagnosis and treatment of patients with injury to, or diseases/disorders of the brain, spinal cord and spinal column,\n and peripheral nerves within all parts of the body.\n" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mr. Bowie Florian" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 3 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Functional/Epilepsy Division\n\n \t\t\t\t\t\t\t\t\t\tPrice:220$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mrs. Ramprasad Sara" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 6 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Neuro-Oncology Division\n\n \t\t\t\t\t\t\t\t\t\tPrice:200$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mr. Lestat Archie" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:12 P.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Pediatric Neurosurgery Division\n\n \t\t\t\t\t\t\t\t\t\tPrice: 210$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mrs. Beverly Roxana" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M.- 6 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Spine Division\n\n \t\t\t\t\t\t\t\t\t\tPrice:250$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t5.Mr. Isapo-Muxika Dorine" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:12 P.M.- 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Vascular Division\n\n \t\t\t\t\t\t\t\t\t\tPrice:200$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number) ";
	cin >> doctor;


	if (doctor == 1)
	{
		serviceC = 220.00;
	 cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;

		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Bowie Florian." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 2)
	{
		serviceC = 200.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Ramprasad Sara." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 3)
	{
		serviceC = 210.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Lestat Archie." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 4)
	{
		serviceC = 250.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Beverly Roxana." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 5)
	{
		serviceC = 200.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Isapo-Muxika Dorine." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else
	{
		cout << "Invalid Input! Redirecting...please wait" << endl;
		Sleep(1100);
		system("CLS");
		sections();
	}
	int Mmenu;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu. ";
	cin >> Mmenu;
	if (Mmenu == 1)
	{
		menu::Menu();
	}
	else
	{
		menu::Menu();
	}

	}


	else if (section == 10)
	{
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Nutrition&Dietetics Section      | -----------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n         Dietetics is the science of how food and nutrition affects human health. The field of dietetics has a strong emphasis on public health\n and a commitment to educating all Americans about the importance of making proper dietary choices. \n" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mr. Rich Viola" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Critical Care\t\t\t\t\t\t\t\t\t\tPrice:90$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mrs. Ruth Carolina" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Diabetes\t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mrs. Perla Meriwether" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:11 A.M. - 9 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Gastroenterology\t\t\t\t\t\t\t\t\t\tPrice:90$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mr. Jaswinder Isha" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Haematology\t\t\t\t\t\t\t\t\t\tPrice:110$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t5.Mrs. Lavender Tricia" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Infectious Diseases\t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t6.Mr. Gerard Sigfrido" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 10 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Movement Disorders\t\t\t\t\t\t\t\t\t\tPrice:140$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t7.Mrs. Roberta Marley" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Renal (Kidney)\t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t8.Mrs. Sneha Jeong-Ho" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:7 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Stroke\t\t\t\t\t\t\t\t\t\tPrice:160$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number)";
	cin >> doctor;

	if (doctor == 1)
	{
		serviceC = 90.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Rich Viola." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 2)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Ruth Carolina." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 3)
	{
		serviceC = 90.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Perla Meriwether." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 4)
	{
		serviceC = 110.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Jaswinder Isha." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 5)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Lavender Tricia." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 6)
	{
		serviceC = 140.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Gerard Sigfrido." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 7)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Roberta Marley." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 8)
	{
		serviceC = 160.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Sneha Jeong-Ho." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else
	{
		cout << "Invalid Input! Redirecting...please wait" << endl;
		Sleep(1100);
		system("CLS");
		sections();
	}
	int Mmenu;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu. ";
	cin >> Mmenu;
	if (Mmenu == 1)
	{
		menu::Menu();
	}
	else
	{
		menu::Menu();
	}
	}

	else if (section == 11)
	{
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Opthhalmology Section      | -----------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n         Ophthalmologists are medical doctors who have undergone specialist training to diagnose and treat conditions involving the eyes and vision.\n" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mr. Gasparo Amrit" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 6 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Anterior segment surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:150$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mr. Trent Macauley" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Cornea, ocular surface, and external disease\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mr. Alphege Topsy" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:11 A.M. - 9 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Glaucoma\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mr. Seong-Su Katheryne" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Neuro-ophthalmology\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t5.Mrs. Myrtie Stafford" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Ocular oncology\n\n \t\t\t\t\t\t\t\t\t\tPrice:110$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t6.Mr. Prabhat Braylen" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 10 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Oculoplastics and orbit surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:120$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t7.Mr. Renesmee Rex" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Ophthalmic pathology\n\n \t\t\t\t\t\t\t\t\t\tPrice:200$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t8.Mrs. Jerri Brandee" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Paediatric ophthalmology/strabismus (misalignment of the eyes)\n\n \t\t\t\t\t\t\t\t\t\tPrice:200$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number) ";
	cin >> doctor;

	if (doctor == 1)
	{
		serviceC = 150.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Gasparo Amrit." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 2)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Trent Macauley." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 3)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Alphege Topsy." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 4)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Seong-Su Katheryne." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 5)
	{
		serviceC = 110.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Myrtie Stafford." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 6)
	{
		serviceC = 120.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Prabhat Braylen." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 7)
	{
		serviceC = 200.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Renesmee Rex." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 8)
	{
		serviceC = 200.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t              You made an appointment at Doctor Jerry Brandee." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else
	{
		cout << "Invalid Input! Redirecting...please wait" << endl;
		Sleep(1100);
		system("CLS");
		sections();
	}
	int Mmenu;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu. ";
	cin >> Mmenu;
	if (Mmenu == 1)
	{
		menu::Menu();
	}
	else
	{
		menu::Menu();
	}

	}


	else if (section == 12)
	{
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Radiology Section      | -----------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n         Radiology is a of medicine that uses for the diagnosis and treatment of disease (X-ray, MRI, nuclear medicine, ultrasound, CT and PET).\n" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mr. Elliott Siddharth" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Body Imaging\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mr. Pyong-Ho Caetlin" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Breast Imaging\n\n \t\t\t\t\t\t\t\t\t\tPrice:150$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mrs. Anastasia Tintin" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:11 A.M. - 9 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Cardiovascular and Thoracic Imaging\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mr. Humphrey Chaska" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Interventional Neuroradiology\n\n \t\t\t\t\t\t\t\t\t\tPrice:120$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t5.Mrs. George Ferdinanda" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Musculoskeletal Radiology\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t6.Mrs. Aveline Ora" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 10 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Neuroradiology\n\n \t\t\t\t\t\t\t\t\t\tPrice:110$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t7.Mrs. Italia Patrizio" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Nuclear Medicine and PET Center\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t8.Mrs. Ani Rayner" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:7 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Pediatric Radiology\n\n \t\t\t\t\t\t\t\t\t\tPrice:150$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number)" << endl;
	cin >> doctor;

	if (doctor == 1)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Elliott Siddharth" << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 2)
	{
		serviceC = 150.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Pyong-Ho Caetlin." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 3)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Anastasia Tintin." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 4)
	{
		serviceC = 120.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Humphrey Chaska." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 5)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor George Ferdinanda." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 6)
	{
		serviceC = 110.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Aveline Ora." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 7)
	{
		serviceC = 100.00; 
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Italia Patrizio." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 8)
	{
		serviceC = 150.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Ani Rayner." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else
	{
		cout << "Invalid Input! Redirecting...please wait" << endl;
		Sleep(1100);
		system("CLS");
		sections();
	}
	int Mmenu;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu. ";
	cin >> Mmenu;
	if (Mmenu == 1)
	{
		menu::Menu();
	}
	else
	{
		menu::Menu();
	}
	}

	else if (section == 13)
	{
	cout << "\n\n\n\n\n\n----------------------------------------------------------------------------------- |       Welcome to the Surgery Section      | -----------------------------------------------------------------------------" << endl;
	cout << "\n\n\n\n\n\n\n??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n         Surgery is a medical or dental specialty that uses operative manual and instrumental techniques on a person to investigate or treat a pathological condition such as \na disease or injury, to help improve bodily function, appearance, or to repair unwanted ruptured areas. \n" << endl;
	cout << "??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDoctors available at our hospital:\n" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t(NOTE: all the prices above are for CONSULTATIONS only, discuss with your doctor for further details)" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Mrs. Quintella Kassia" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Cardiothoracic Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:90$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t2.Mrs. Miriam Xavier" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Colon and Rectal Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t3.Mrs. Hyun-Jung Briony" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:11 A.M. - 9 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: General Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:90$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t4.Mrs. Winona Raghu" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Gynecology and Obstetrics\n\n \t\t\t\t\t\t\t\t\t\tPrice:110$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t5.Mrs. Jung Ajeet" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Gynecologic Oncology\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t6.Mrs. Lola Braith" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 10 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Neurological Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:140$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t7.Mr. Rufus Rosalind" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:10 A.M. - 8 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Ophthalmic Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t8.Mrs. Vanessa Scott" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:7 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Oral and Maxillofacial Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:160$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t9.Mrs. Celia Ivan" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Orthopaedic Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:140$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t10.Mr. Alfred Warren" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:11 A.M. - 7 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Otorhinolaryngology\n\n \t\t\t\t\t\t\t\t\t\tPrice:110$\n\n" << endl;
	
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t11.Mrs. Degataga Bree" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 7 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Pediatric Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t12.Mrs. Potsunakwahipu Clarice" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:8 A.M. - 4 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Plastic and Maxillofacial Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:110$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t13.Mr. Bartolo Vinay" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 7 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Urology\n\n \t\t\t\t\t\t\t\t\t\tPrice:100$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t14.Mrs. Rosanna Braith" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tSchedule:9 A.M. - 3 P.M.\n\n\t\t\t\t\t\t\t\t\t\tDivision: Vascular Surgery\n\n \t\t\t\t\t\t\t\t\t\tPrice:130$\n\n" << endl;

	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key to get back." << endl;
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tWhich doctor do you want? (type the number) ";
	cin >> doctor;

	if (doctor == 1)
	{
		serviceC = 90.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Quintella Kassia." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 2)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Miriam Xavier." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 3)
	{
		serviceC = 90.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Hyun-Jung Briony." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 4)
	{
		serviceC = 110.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Winona Raghu." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 5)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Jung Ajeet." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 6)
	{
		serviceC = 140.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Lola Braith." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 7)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Rufus Rosalind." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}
	else if (doctor == 8)
	{
		serviceC = 160.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Vanessa Scott." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 9)
	{
		serviceC = 140.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Celia Ivan." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 10)
	{
		serviceC = 110.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Alfred Warren." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 11)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Degataga Bree." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 12)
	{
		serviceC = 110.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Potsunakwahipu Clarice." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 13)
	{
		serviceC = 100.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Bartolo Vinay." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else if (doctor == 14)
	{
		serviceC = 130.00;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
		cout << "\n\n\n\t\t\t\t\t\t\t\t             You made an appointment at Doctor Rosanna Braith." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tOur operator will call you to set a date favorable for both of you." << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t\t\tGo tot the billing section to take the receipt." << endl;
		cout << "\n\t\t\t\t\t\t\t\t " << setfill('+') << setw(95) << "" << endl;
	}

	else
	{
		cout << "Invalid Input! Redirecting...please wait" << endl;
		Sleep(1100);
		system("CLS");
		sections();
	}
	int Mmenu;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress 1 if you want to go to the main menu. ";
	cin >> Mmenu;
	if (Mmenu == 1)
	{
		menu::Menu();
	}
	else
	{
		menu::Menu();
	}
	}
	else {
	cout << "Invalid Input! Redirecting...please wait" << endl;
	Sleep(1100);
	system("CLS");
	menu::Menu();
}

}

appointment::~appointment()
{
}

//#include "waitingMenu.h"
//#include "WaitingList.h"
//#include "WaitingList.cpp"
/*#include <iostream>
using namespace std;
#include "waitingMenu.h"
#include "WaitingList.h"

void waitingMenu::WM()
{
	int choice;
	string nn1 = "";
	int ssize = 0;
	int sstatus = 0;
	WaitingList list;
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t        ---------------" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ | Waiting List | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t        ---------------" << endl;

	cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t ___________________________________________" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t|\t\t\t\t\t    |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Add new Patient              ->    1     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Informations                  ->    2     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Display Names                 ->    3     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Change Status                 ->    4     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Check Beds                    ->    5     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| List Based on Status          ->    6     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Person Before                 ->    7     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Remove                        ->    8     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Exit                          ->    9     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t|\t\t\t\t\t    |\t" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t|___________________________________________|" << endl;

	do {
		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\tEnter your choice: ";
		cin >> choice;
		if (1 <= choice && choice <= 8)
		{
			switch (choice)
			{
			case 1:
				system("CLS");
				list.newP();
				WM();
				break;

			case 2:
				system("CLS");
				list.showP();
				WM();
				break;
			case 3:
				system("CLS");
				list.showA();
				WM();
				break;

			case 4:
				system("CLS");
				list.Cstatus();
				WM();
				break;

			case 5:
				system("CLS");
				list.BED();
				WM();
				break;

			case 6:
				system("CLS");
				list.SStatus();
				WM();
				break;

			case 7:
				system("CLS");
				list.next();
				WM();
				break;
			case 8:
				system("CLS");
				cout << "Enter the name";
				cin >> nn1;
				//list.Delete(nn1);
				WM();
				break;
			default:
				cout << "Invalid choice";
				break;
			}

		}
		else
		{
			cout << "Invalid choice";
		}
	}
	
while (choice != 9);

system("pause");
}


void waitingMenu::OutputPatient(patient* p)
{
	if (p == NULL || p->ID[0] == 0)
	{
		cout << "No patient";
			return;
	}
	else
		cout << "Patient data : ";
		cout << "First name : " << p->FirstName;
		cout << "Last name : " << p->LastName;
		cout << "Social security number : " << p->ID;

}

int waitingMenu::ReadNumber()
{
	char buffer[20];
	cin.getline(buffer, sizeof(buffer));
	return atoi(buffer);
}

void waitingMenu::DepartmentMenu(queue* q)
{
	int choice;
	int p;
	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t        ---------------" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ | Waiting List | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t        ---------------" << endl;

	cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t ___________________________________________" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t|\t\t\t\t\t    |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Add normal Patient              ->    1     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Add Critically ill patient                 ->    2     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Surgery                 ->    3     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Remove Patient                 ->    4     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| List queue                    ->    5     |" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t| Change or exit         ->    6     |" << endl;
	cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t ___________________________________________" << endl;
	choice = ReadNumber();
	switch (choice)
	{
	case 1:   // Add normal patient
		p = InputPatient();
		if (p.ID[0])
		{
			success = q->AddPatientAtEnd(p);
			system("CLS");
			if (success)
			{
				cout << "
					Patient added :

				";

			}
			else
			{
				// error
				cout << "

					Error: The queue is full.Cannot add patient : ";
			}
			OutputPatient(&p);
			cout << "

				Press any key";
				getch();
		}
		break;
}
*/
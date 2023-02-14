/*#include "WaitingList.h"

WPatients::WPatients()
{
	name = "";
	size = status = 0;
	next = NULL;
}

WPatients::WPatients(string n1, int s1, int st1)
{
	name = n1;
	size = s1;
	status = st1;
	next = NULL;
}

WaitingList::WaitingList()
{
	doctors = 100;
	patientsT = 0;
	beds = 0;
	head = tail = NULL;
}

//



void WaitingList::Cstatus()
{
	string Name;
	WPatients* fcfs;
	fcfs = head;
	cout << "Enter your name, please:";
	cin >> Name;
	while (fcfs != NULL)
	{
		if (Name == fcfs->name)
		{
			if (fcfs->status == 2)
			{
				fcfs->status = 1;
				cout << "Succesfully saved!" << endl;
				break;
			}
			else
			{
				fcfs->status = 1;
				cout << "Your changes can't be saved" << endl;
				break;
			}
		}
		else if (Name != fcfs->name)
		{
			fcfs = fcfs->next;
		}
	}
	if (fcfs == NULL)
	{
		cout << "ERROR!(Can't be found)" << endl;
	}
}





void WaitingList::next()
{
	string nume;
	WPatients* fcf;
	fcf = head;
	cout << "Enter your name:";
	cin >> nume;
	WPatients* fc{};
	bool p = true;
	while (fc == NULL)
	{
		if (nume == fc->name)
		{
			p = true;
			break;
		}
		else if(nume!=fc->name)
		{
			fc = fc->next;
		}
	}
	if (fc == NULL)
	{
		p = false;
	}
	if (fcf->name == nume)
	{
		cout << "None before you";
	}
	else if (p == true)
	{
		do
		{
			cout << "Your name:" << fc->name << endl;
			fc = fc->next;
		} while (fc->name != nume);
	}
	else if (p == false)
	{
		cout << "The name isn't in our database." << endl;
	}
}

void WaitingList::SStatus()
{
	int Status, c = 0;
	WPatients* fcfs;
	fcfs = head;
	cout << "Dear Doctor, please enter the status:";
	cin >> Status;
	if (Status != 1 && Status != 2)
	{
		cout << "Please, enter the correct status!" << endl;
	}
	else
	{
		if (fcfs ==NULL)
		{
			cout << "Empty!" << endl;
		}
		else
		{
			do
			{
				if (fcfs->status == Status)
				{
					cout << "Name:" << fcfs->name << endl;
					cout << "How many days?" << fcfs->size << endl;
					fcfs = fcfs->next;
					c++;
				}
				else
				{
					fcfs=fcfs->next;
				}
			} 
			while (fcfs->next != NULL);
			if (fcfs->status == Status)
			{
				cout << "Name:" << fcfs->name << endl;
				cout << "How many days?" << fcfs->size << endl;
				fcfs = fcfs->next;
				c++;
			}
			else
			{
				fcfs = fcfs->next;
			}
			cout << "Total days in this list:" << c << endl;
		}
	}
}

void WaitingList::newP()
{
	
	WPatients* fcfs = new WPatients;
	cout << "Enter the name:";
	cin >> fcfs->name;
	WPatients* fcf = new WPatients;
	fcf = head;
	while (fcf != NULL)
	{
		if (fcfs->name != fcf->name)
		{
			fcfs = fcfs->next;
		}
		else if (fcfs->name == fcf->name)
		{
			cout << "Already in our database!" << endl;
			cout << "Enter name:";
			cin >> fcfs->name;
			fcf = head;
		}
	}
	cout << "Enter the number of days:";
	cin >> fcfs->size;
	cout << "Enter the status:";
	cin >> fcfs->status;
	while (fcfs->status!=1&&fcfs->status!=2)

	{
		cout << "Please, enter the correct status";
		cin >> fcfs->status;
	}

	if (head == NULL)
	{
		head = tail = fcfs;
		patientsT++;
	}
	else
	{
		tail->next = fcfs;
		tail = tail->next;
		patientsT++;
	}

}



/*void WaitingList::Delete(string n1)
{
	WPatients* fcfs{};
	WPatients* fcf;
	fcf = head;
    fcf = fcfs->next;
	if (fcf == NULL)
	{
		cout << "Can't be found" << endl;
	}
	else if (fcfs->name == n1)
	{
		head = fcf->next;
		cout << "Saved!" << endl;
		delete fcf;
		//break;
	}
	else 
	{
		do {
			if (n1 == fcfs->name)
			{
				fcf->next = fcfs->next;
				delete fcfs;
				cout << "Saved!";
				break;
			}
			else if (n1 != fcfs->name)
			{
				fcfs = fcfs->next;
				fcf = fcf->next;
			}
		} while (fcfs != NULL);

	}
}

void WaitingList::BED()
{
	string namess;
	float s = 150.00;
	WPatients* fcfs = head;
	cout << "Enter the available beds";
	cin >> beds;
	
	while (beds >= 1 && fcfs != NULL)
	{
		int a;
		float b;

		b = ((fcfs->size) / s);
		a = (fcfs->size) / s;

		if (beds < b)
		{
			fcfs = fcfs->next;
		}

		else if (beds >= b)
		{
			if (a == b)
			{
				beds = beds - a;
				cout << "Name:";
				cout << fcfs->name << endl;
				namess = fcfs->name;
				//Delete(fcfs->name);
				break;
			}
			else if (a != b)
			{
				beds = beds - (a + 1);
				cout << fcfs->name << endl;
				//Delete(fcfs->name);
				break;
			}
		}


	}
	cin.get();
	if (fcfs == NULL)
	{
		cout << "Nothing here!" << endl;
	}
}


void WaitingList::showA()
{
	int d = 0;
	WPatients* fcfs;
	fcfs = head;
	if (fcfs == NULL)
	{
		cout << "Empty!" << endl;

	}
	while (fcfs != NULL)
	{
		cout << "The name:" << fcfs->name << endl;
		cout << "Days of staying:" << fcfs->size << endl;
		cout << "Status:" << fcfs->status << endl;
		d++;
		fcfs = fcfs->next;
	}
	cout << "In total:" << d << endl;
	cout << "\n" << endl;

}

void WaitingList::showP()
{
	string Nme;
	WPatients* fcfs;
	fcfs = head;
	cout << "Enter the name:";
	cin >> Nme;

	while (fcfs != NULL)
	{
		if (Nme == fcfs->name)
		{
			cout << "The name:" << fcfs->name << endl;
			cout << "Days of staying:" << fcfs->size << endl;
			cout << "Status:" << fcfs->status << endl;
			break;
		}
		else if (Nme != fcfs->name)
		{
			fcfs = fcfs->next;
		}
		if (fcfs == NULL)
		{
			cout << "Can't be found!" << endl;
		}

	}
}
#include "WaitingList.h"
#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
using namespace std;
queue::queue()
{
	// constructor
	NumberOfPatients = 0;
}

int queue::AddPatientAtEnd(patient p)
{
	// adds a normal patient to the end of the queue.
	// returns 1 if successful, 0 if queue is full.
	if (NumberOfPatients >= MAXPATIENTS)
	{
		// queue is full
		return 0;
	}
	// put in new patient
	else
		List[NumberOfPatients] = p;  NumberOfPatients++;
	return 1;
}

int queue::AddPatientAtBeginning(patient p)
{
	// adds a critically ill patient to the beginning of the queue.
	// returns 1 if successful, 0 if queue is full.
	int i;
	if (NumberOfPatients >= MAXPATIENTS)
	{
		// queue is full
		return 0;
	}
	// move all patients one position back in queue
	for (i = NumberOfPatients - 1; i >= 0; i--)
	{
		List[i + 1] = List[i];
	}
	// put in new patient
	List[0] = p;  NumberOfPatients++;
	return 1;
}
patient queue::GetNextPatient(void)
{
	// gets the patient that is first in the queue.
	// returns patient with no ID if queue is empty

	int i;  patient p;
	if (NumberOfPatients == 0) {
		// queue is empty
		strcpy(p.ID, "");
		return p;
	}
	// get first patient
	p = List[0];
	// move all remaining patients one position forward in queue
	NumberOfPatients--;
	for (i = 0; i < NumberOfPatients; i++)
	{
		List[i] = List[i + 1];
	}
	// return patient
	return p;
}
int queue::RemoveDeadPatient(patient* p)
{
	// removes a patient from queue.
	// returns 1 if successful, 0 if patient not found
	int i, j, found = 0;
	// search for patient
	for (i = 0; i < NumberOfPatients; i++)
	{
		if (stricmp(List[i].ID, p->ID) == 0)
		{
			// patient found in queue
			*p = List[i];  found = 1;
			// move all following patients one position forward in queue
			NumberOfPatients--;
			for (j = i; j < NumberOfPatients; j++)
			{
				List[j] = List[j + 1];
			}
		}
	}
	return found;
}

void queue::OutputList(void)
{
	// lists entire queue on screen
	int i;
	if (NumberOfPatients == 0)
	{
		cout << "Queue is empty";
	}
	else
	{

		for (i = 0; i < NumberOfPatients; i++)
		{
			cout << "" << List[i].FirstName;
			cout << " " << List[i].LastName;
			cout << " " << List[i].ID;
		}
	}
}
patient InputPatient(void)
{
	// this function asks user for patient data.
	patient p;
	cout << "Please enter data for new patient\nFirst name : ";
	cin.getline(p.FirstName, sizeof(p.FirstName));
	cout << "Last name : ";
	cin.getline(p.LastName, sizeof(p.LastName));
	cout << "Social security number : ";
    cin.getline(p.ID, sizeof(p.ID));
	// check if data valid
	if (p.FirstName[0] == 0 || p.LastName[0] == 0 || p.ID[0] == 0)
	{
		// rejected
		strcpy(p.ID, "");
		cout << "Error: Data not valid.Operation cancelled.";
		_getch();
	}
	return p;
}
*/

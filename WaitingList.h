/*#include <iostream>
#include <string>
using namespace std;

class WPatients //node patient
{
public:
	string name;
	int size, status;
	WPatients* next;

	WPatients();
	WPatients(string, int, int);
};


class WaitingList//linked list
{
public:
	int doctors;
	int beds;
	int patientsT;
	WPatients* head, * tail;
	WaitingList();
	WaitingList(int);
	void newP();
	void showP();
	void showA();
	void Cstatus();
	void BED();
	void SStatus();
	void next();
	//void Delete(string);
};*/

/*#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
using namespace std;

#define MAXPATIENTS 100


class queue
{
public:
	queue(void);
	int AddPatientAtEnd(patient p);
	int AddPatientAtBeginning(patient p);
	patient GetNextPatient(void);
	int RemoveDeadPatient(patient* p);
	void OutputList(void);
	char DepartmentName[50];
private:
	int NumberOfPatients;
	patient List[MAXPATIENTS];
};*/
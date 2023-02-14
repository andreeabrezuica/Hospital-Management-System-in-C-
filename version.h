#pragma once
#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>

// define maximum number of patients in a list
#define MAXPATIENTS 100

// define structure for patient data
struct patient
{
	char FirstName[50]; //stores data for the first name;
	char LastName[50];  //stores data for the last name;
	char ID[20];        //stores data for the id;
};

class queue
{
private:
	int NumberOfPatients; //stores data for the number of patients
	patient List[MAXPATIENTS]; //stores the structure data for the list
public:
	queue();//constructor for initialization

	char DepartmentName[50]; //stores the department name

	int AddPatientAtEnd(patient p); //function that adds patients at the end of the list(non-emergency cases);

	int AddPatientAtBeginning(patient p); //function that adds patients at the beggining of the list(emergency cases);

	patient GetNextPatient(); //get the patient that is first in the queue;

	int RemovePatient(patient* p); //removes a patient from the queue;

	void OutputList(); //list entire queue on the screen;

	static void OutputPatient(patient* p); //this function outputs patient data on the screen;

	static int ReadNumber();  //this function reads an integer(cin doesn't work);

	static void DepartmentMenu(queue* q);  //the menu;

	~queue();//destructor
};
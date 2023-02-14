#include "version.h"
#include <iostream>
#include <iomanip>
#include "doctors.h"
#include "version2.h"
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
    List[NumberOfPatients] = p;
    NumberOfPatients++;
    return 1;
}
int queue::AddPatientAtBeginning(patient p)
{
    // adds a critically ill patient to the beginning of the queue.
    // returns 1 if successful, 0 if queue is full.
    
    if (NumberOfPatients >= MAXPATIENTS)
    {
        // queue is full
        return 0;
    }

    // move all patients one position back in queue
    for (int i = NumberOfPatients - 1; i >= 0; i--)
    {
        List[i + 1] = List[i];
    }
    // put in new patient
    List[0] = p;  
    NumberOfPatients++;
    return 1;
}
patient queue::GetNextPatient()
{
    // gets the patient that is first in the list
    // returns patient with no ID if queue is empty

    patient p;
    if (NumberOfPatients == 0) {
        // queue is empty
        strcpy_s(p.ID, "");
        return p;
    }
    // get first patient
    p = List[0];
    // move all remaining patients one position forward in queue
    NumberOfPatients--;
    for (int i = 0; i < NumberOfPatients; i++)
    {
        List[i] = List[i + 1];
    }
    // return patient
    return p;
}
int queue::RemovePatient(patient* p)
{
    // removes a patient from queue.
    // returns 1 if successful, 0 if patient not found
    int i, j, found = 0;
    // search for patient
    for (i = 0; i < NumberOfPatients; i++)
    {
        if (_stricmp(List[i].ID, p->ID) == 0)
        {
            // patient found in queue
            *p = List[i];  
            found = 1;
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

void queue::OutputList()
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

patient InputPatient()
{
    system("CLS");
    // this function asks user for patient data.
    patient p;
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tPlease enter data for new patient\n\t\t\t\t\t\t\t\tFirst name : ";
    cin.getline(p.FirstName, sizeof(p.FirstName));
    cout << "\n\t\t\t\t\t\t\t\tLast name : ";
    cin.getline(p.LastName, sizeof(p.LastName));
    cout << "\n\t\t\t\t\t\t\t\tSocial security number : ";
    cin.getline(p.ID, sizeof(p.ID));
    // check if data valid
    if (p.FirstName[0] == 0 || p.LastName[0] == 0 || p.ID[0] == 0)
    {
        // error
        strcpy_s(p.ID, "");
        cout << "Error: Data not valid.Operation cancelled.";
        cin.get();
    }
    return p;
}
void queue::OutputPatient(patient* p)
{
    system("CLS");
    // this function outputs patient 
    if (p == NULL || p->ID[0] == 0)
    {
        cout << "\n\t\t\t\t\t\t\t\tNo patient";
        return;
    }
    else
        cout << "\n\t\t\t\t\t\t\t\tPatient data : ";
    cout << "\n\t\t\t\t\t\t\t\tFirst name : " << p->FirstName;
    cout << "\n\t\t\t\t\t\t\t\tLast name : " << p->LastName;
    cout << "\n\t\t\t\t\t\t\t\tSocial security number : " << p->ID;

}

int queue::ReadNumber()
{
    // this function reads an integer number from the keyboard.
    // it is used because input with cin >> doesn't work
    char buffer[20];
    cin.getline(buffer, sizeof(buffer));
    return atoi(buffer);//convert a string value to an integer value
}

void queue::DepartmentMenu(queue* q)
{
    
    int choice = 0, success;  
    patient p;
    int sChoice = 0;
    doctors s1;
    while (choice != 6)
    {
        
        system("CLS");
        // print menu
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
        cout << "\n\t\t\t\t\t" << setfill('+') << setw(125) << "" << endl;
        cout << "\n\n\n\t\t\t\t\t\t\t\t             Welcome to department : " << q->DepartmentName;
        cout << "\n\n\t\t\t\t\t\t\t\t             Please enter your choice : ";
        cout << "\n\n\t\t\t\t\t\t\t\t             Doctors Management -> 1";
        cout << "\n\n\t\t\t\t\t\t\t\t             Add normal patient -> 2";
        cout << "\n\n\t\t\t\t\t\t\t\t             Add emergency -> 3";
        cout << "\n\n\t\t\t\t\t\t\t\t             Surgery -> 4";
        cout << "\n\n\t\t\t\t\t\t\t\t             Remove patient  -> 5";
        cout << "\n\n\t\t\t\t\t\t\t\t             List queue -> 6";
        cout << "\n\n\t\t\t\t\t\t\t\t             Change department or exit -> 7";
        cout << "\n\t\t\t\t\t" << setfill('+') << setw(125) << " " << endl;
        // get user choice
        choice = ReadNumber();
        // do indicated action
        
        switch (choice)
        {
        case 1:
            cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t        -------------------" << endl;
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ | Doctor Management | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t        -------------------" << endl;
            cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t|  1. Enter New Doctor Record      |" << endl;
            cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t|  2. See Old Doctor Record        |" << endl;
            cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t|  3. Return to Menu          |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t------------------------------------" << endl;
            cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tEnter choice: ";
            cin >> sChoice;
            system("CLS");

            if (sChoice == 1)
            {
                s1.dinfo();
            }
            else if (sChoice == 2)
            {
                s1.dsinfo();
            }
            else
            {
                submenu::menu2();
            }

        case 2:   // Add normal patient
            p = InputPatient();
            if (p.ID[0])
            {
                success = q->AddPatientAtEnd(p);
                system("CLS");
                if (success)
                {
                    cout << "\n\t\t\t\t\t\t\t\tPatient added :";

                }
                else
                {
                    // error
                    cout << "\n\t\t\t\t\t\t\t\tError: The queue is full.Cannot add patient : ";
                }
                OutputPatient(&p);
                cout << "\n\n\t\t\t\t\t\t\t\tPress any key";
                cin.get();
            }
            break;

        case 3:   // Add critically ill patient
            p = InputPatient();
            if (p.ID[0])
            {
                success = q->AddPatientAtBeginning(p);
                system("CLS");
                if (success)
                {
                    cout << "\n\t\t\t\t\t\t\t\tPatient added :";
                }
                else
                {
                    // error
                    cout << "\n\t\t\t\t\t\t\t\tError: The queue is full.Cannot add patient : ";
                }

                OutputPatient(&p);
                cout << "Press any key";
                cin.get();
            }
            break;

        case 4:   // Take out patient for operation
            p = q->GetNextPatient();
            system("CLS");
            if (p.ID[0])
            {
                cout << "\n\t\t\t\t\t\t\t\tPatient to operate :";
                OutputPatient(&p);
            }
            else
            {
                cout << "\n\t\t\t\t\t\t\t\tThere is no patient to operate.";
            }
            cout << "Press any key";
            cin.get();
            break;

        case 5:   // Remove patient from queue
            p = InputPatient();
            if (p.ID[0])
            {
                success = q->RemovePatient(&p);
                system("CLS");
                if (success)
                {
                    cout << "Patient removed :";
                }
                else
                {
                    // error
                    cout << "Error: Cannot find patient :";
                }
                OutputPatient(&p);
                cout << "Press any key";
                cin.get();
            }
            break;

        case 6:   // List queue
            system("CLS");  
            q->OutputList();
            cout << " Press any key";
            cin.get();
            break;
        }
    }
}

queue::~queue()
{
}

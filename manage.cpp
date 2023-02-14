#include "manage.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "menu.h"

using namespace std;

manage::manage()
{
	system("color 0A");
	/*cout << "\n\n\n\n\n\n\n\n\tEnter your name to continue as an admin:" << endl;
	cin >> user;
	system("CLS");
	//menu();*/

    string line = " ";
    ifstream readFile("userandpassword.txt");
    string username;
    string password;
    string _username;
    string _password;

    cout << "\n\n\n\n\t\t\t\t\t\t\t\t\tLL           OOO      GGGGGGGGGG  IIIIIIII    NN          NN" << endl;
    cout << "\t\t\t\t\t\t\t\t\tLL         OO   OO    GG             II       NNNN        NN" << endl;
    cout << "\t\t\t\t\t\t\t\t\tLL        OO     OO   GG             II       NN  NN      NN" << endl;
    cout << "\t\t\t\t\t\t\t\t\tLL        OO     OO   GG    GGGG     II       NN    NN    NN" << endl;
    cout << "\t\t\t\t\t\t\t\t\tLL        OO     OO   GG      GG     II       NN      NN  NN" << endl;
    cout << "\t\t\t\t\t\t\t\t\tLL         OO   OO    GG      GG     II       NN        NNNN  " << endl;
    cout << "\t\t\t\t\t\t\t\t\tLLLLLLLLL    OOO      GGGGGGGGGG  IIIIIIII    NN          NN" << endl;
   

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tUsername: ";
    cin >> username;
    cout << "\t\t\t\t\t\t\t\t\t\t\t-------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tPassword: ";
    cin >> password;
    cout << "\t\t\t\t\t\t\t\t\t\t\t-------------------------" << endl;
    
   

 bool found = false;
    while (getline(readFile, line)) {

        stringstream iss(line);//The stringstream class Implements the Input/Output Operations on Memory Bases streams(it works like cin and cout)
        iss >> _username >> _password;

        if (username == _username && password == _password) {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\tLogin Successfully!" << endl;
            cin.get();
            found = true;
            //break;
            cin.get();
            system("CLS");
            menu::Menu();
            
           
        }
        else if (!found) 
        {
            cin.get();

            cout << "\n\t\t\t\t\t\t\t\t\t\t\tInvalid Username and/or Password" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\tPlease verify your email!" << endl;
            cin.get();
            return;
        }

        
        
    }
    system("CLS");
    cin.get();
   // menu::Menu();
    
    
   
    

    /*if (!found) {
        cin.get();
        
        cout << "Invalid Username and/or Password" << endl;
        cin.get();
    }
   
    menu();*/
   
}

manage::~manage()
{
    
}
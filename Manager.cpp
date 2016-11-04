/*-------------------------------------------------------------------------
Programmer: Sina Amini

Description:	Manager body file, repeatedly gets and runs the user's menu
selection until the user decides to quit 
Programs implimented:	Caesar Cypher, 
						Brute Force Decryption,
						Frequency Analysis
-------------------------------------------------------------------------*/

#include <stdio.h>
#include <iostream>
#include <string>
#include "Manager.h"
#include "Caesar.h"
#include "BruteForce.h"
#include "Frequency.h"
using namespace std;

// main user interaction function
void MGR_conversation(MGR *obj)
{
	MGR_setup(obj); //setup stub function
	MGR_hello(obj); //greets user

	do
	{
		MGR_listen(obj); //reads user's game choice from consol
		MGR_respond(obj); //does the needed processing for that input
	} while (MGR_endcheck(obj)); //exit loop if user inputs 0

	MGR_cleanup(obj); //cleanup stub function
}

// performs any needed internal setup for the class
void MGR_setup(MGR *obj)
{
	//printf("Setup stub function\n"); //to be implemented 
}

// announces the class to the user
void MGR_hello(MGR *obj)
{
	printf("Welcome to Hackers Toolkit\n\n");
}

// asks/gets the user's input, cleaned up if needed
void MGR_listen(MGR *obj)
{
	print_menu(); //print Games Manager menu for user
	cin >> obj->choice; //read input from console
}

// does the needed processing for that input
void MGR_respond(MGR *obj)
{
	//DPRINTF("respond().\n");
	printf("user response: %d\n\n", obj->choice);
	switch (obj->choice)
	{
	case 0: //user decides to exit
		printf("Thanks for Hacking!\n");
		break;
	case 1: //user decides to run Caesar Cypher
	{
		CSR RGC;
		CSR_conversation(&RGC);
	}
	break;
	case 2: //user decides to run Brute Force Decryption
	{
		BRT FRC;
		BRT_conversation(&FRC);
	}
	break;
	case 3: //user decides to run Frequency Analysis
	{
		FRQ ANL;
		FRQ_conversation(&ANL);
	}
	break;
	default: //user inputs invalid menu option
		printf("Invalid option\n\n");
	}
}

// checks whether the user is done
int MGR_endcheck(MGR *obj)
{
	if (0 != obj->choice) return 1; //user has not chosen the exit option
	else return 0; //user has chosen the exit option
	printf("\n");
}

// performs any needed internal shutdown for the class
void MGR_cleanup(MGR *obj)
{
	//printf("Cleanup stub function\n"); //to be implemented 
}

//prints game menu to user
// ALine count = 1
void print_menu()
{
	printf("Menu\n");
	printf("0. EXIT\n");
	printf("1. Caesar Cypher\n");
	printf("2. Brute Force\n");
	printf("3. Letter Frequency Analysis");
}
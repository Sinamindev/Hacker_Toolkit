/*-------------------------------------------------------------------------
Programmer: Sina Amini

Description:	Caesar Cypher Body file. Encrypts phrase M using Caesar
Cypher. Each character is shifted by N characters. Both M and N are
provided by the user.
Program:	Caesar Cypher
-------------------------------------------------------------------------*/

#include <stdio.h>
#include <iostream>
#include <string>
#include "Caesar.h"
using namespace std;

void CSR_conversation(CSR *BRA)
{
	CSR_setup(BRA); //setup stub function
	CSR_hello(BRA); //greets user

	do
	{
		CSR_listen(BRA); // reads user's choice from console
		CSR_respond(BRA); // does the needed processing for that input
	} while (CSR_endcheck(BRA)); // exit loop if user inputs 0

	CSR_cleanup(BRA); // thanks user for playing
}

void CSR_setup(CSR *BRA)
{
	//stub function
}

void CSR_hello(CSR *BRA)
{
	printf("\nWelcome to Caesar Cypher!\n");

}

void CSR_listen(CSR *BRA)
{
	
	printf("\nEnter a value n (1-26): ");
	while (!(cin >> BRA->rotate))
	{
		cin.clear();
		cin.ignore(1000,'\n');
		cout << "Invalid! Value n must be an integer value\n";
		printf("\nEnter a value n: ");
	}
	cin.ignore(1000, '\n');
	printf("\nEnter a phrase to encrypt: ");
	getline(cin, BRA->phrase);
}

void CSR_Caesar(CSR *BRA)
{
	int ix = 0;
	char c;

	while (c = toupper(BRA->phrase[ix]))
	{
		if (c >= 'A' && c <= 'Z')
		{
			if ((c + BRA->rotate) <= 'Z') (BRA->phrase[ix] = toupper(BRA->phrase[ix])) += BRA->rotate;
			else (BRA->phrase[ix] = toupper(BRA->phrase[ix])) -= (26- BRA->rotate);
		}
		++ix;
	}
}

void CSR_respond(CSR *BRA)
{
	CSR_Caesar(BRA);
	printf("\nString encrypted with Caesar Cypher:\n");
	cout << BRA->phrase;
	cout << endl;
}

int CSR_endcheck(CSR *BRA)
{
	return 0; 
	printf("\n");
}

void CSR_cleanup(CSR *BRA)
{
	printf("\nThanks for using Caesar Cypher!\n\n"); // Thanks the user 
}

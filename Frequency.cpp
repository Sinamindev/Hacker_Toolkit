/*-------------------------------------------------------------------------
Programmer: Sina Amini

Description:	Frequency Analysis Body file. Counts the frequency of
each character in a phrase provided by the user
Program:	Frequency Analysis
-------------------------------------------------------------------------*/

#include <stdio.h>
#include <iostream>
#include <string>
#include "Frequency.h"
using namespace std;

const char ALPHABET[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };


void FRQ_conversation(FRQ *ANL)
{
	FRQ_setup(ANL); //setup stub function
	FRQ_hello(ANL); //greets user

	do
	{
		FRQ_listen(ANL); // reads user's choice from console
		FRQ_respond(ANL); // does the needed processing for that input
	} while (FRQ_endcheck(ANL));

	FRQ_cleanup(ANL); // thanks user 
}

void FRQ_setup(FRQ *ANL)
{
	//set fruquencies to 0
	int ix = 0;
	for (int ix = 0; ix < 26; ++ix)	ANL->frequencies[ix] = 0;
}

void FRQ_hello(FRQ *ANL)
{
	printf("\nWelcome to Frequency Analysis!\n");
}

void FRQ_listen(FRQ *ANL)
{
	printf("\nEnter a phrase to Analyze: ");
	cin.ignore();
	getline(cin, ANL->phrase);
}

void FRQ_Analyze_Frequency(FRQ *ANL)
{
	int ix;
	int iy;
	char c;

	ix = iy = 0;
	while (c = toupper(ANL->phrase[ix]))
	{
		iy = 0;
		if (c >= 'A' && c <= 'Z')
		{
			while (ALPHABET[iy])
			{
				if (c == ALPHABET[iy])
					ANL->frequencies[iy]++;
				++iy;
			}
		}
		++ix;
	}
}

void FRQ_respond(FRQ *ANL)
{
	FRQ_Analyze_Frequency(ANL);
	printf("\nFrequency count of each character:\n");
	for (int iz = 0; iz < 26; ++iz)
	{
		cout << ALPHABET[iz] << ": " << ANL->frequencies[iz];
		cout << endl;
	}
}

int FRQ_endcheck(FRQ *ANL)
{
	return 0;
	printf("\n");
}

void FRQ_cleanup(FRQ *ANL)
{
	printf("\nThanks for using Frequency Analyzer!\n\n"); // Thanks the user
}

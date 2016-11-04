/*-------------------------------------------------------------------------
Programmer: Sina Amini

Description:	Brute Force Decryption Body file. Decrypts a phrase 
provided by the user using brute force methods.
Program:	Brute Force Decryption
-------------------------------------------------------------------------*/

#include <stdio.h>
#include <iostream>
#include <string>
#include "BruteForce.h"
using namespace std;

void BRT_conversation(BRT *FRC)
{
	BRT_setup(FRC); //setup stub function
	BRT_hello(FRC); //greets user

	do
	{
		BRT_listen(FRC); // reads user's choice from console
		BRT_respond(FRC); // does the needed processing for that input
	} while (BRT_endcheck(FRC)); 

	BRT_cleanup(FRC); // thanks user 
}

void BRT_setup(BRT *FRC)
{
	//stub function
}

void BRT_hello(BRT *FRC)
{
	printf("\nWelcome to Brute Force!\n");
}

void BRT_listen(BRT *FRC)
{
	printf("\nEnter a phrase to decrypt: ");
	cin.ignore();
	getline(cin, FRC->phrase);
}

void BRT_Brute_Force(BRT *FRC)
{
	int ix = 0;
	char c;
	string encrypted;
	FRC->rotate = 0;
	while (25 > (FRC->rotate++))
	{
		encrypted = "";
		ix = 0;
		while (FRC->phrase[ix])
		{
			if (FRC->phrase[ix] != ' ')
			{
				c = toupper(FRC->phrase[ix]);
				c = ((((c - 65) + FRC->rotate) % 26) + 65);
				++ix;
				FRC->forced_phrases[FRC->rotate] += c;
			}
			else
			{
				++ix;
				FRC->forced_phrases[FRC->rotate] += ' ';
			}
		}
	}
}

void BRT_respond(BRT *FRC)
{
	BRT_Brute_Force(FRC);
	printf("\nBrute Forced strings:\n");
	for (int ix = 0; ix < 26; ++ix)
	{
		cout << FRC->forced_phrases[ix];
		cout << endl;
	}
}

int BRT_endcheck(BRT *FRC)
{
	return 0; 
	printf("\n");
}

void BRT_cleanup(BRT *FRC)
{
	printf("\nThanks for using Brute Force!\n\n"); // Thanks the user 
}

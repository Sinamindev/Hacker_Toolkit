/*-------------------------------------------------------------------------
Programmer: Sina Amini

Description:	Brute Force Decryption Header file. Decrypts a phrase 
provided by the user using brute force methods.
Program:	Brute Force Decryption
-------------------------------------------------------------------------*/

#ifndef _BRUTEFORCE_H_
#define _BRUTEFORCE_H_

typedef struct BRT_
{
	std::string phrase;
	std::string forced_phrases[26];
	int rotate;
	int Exit;
} BRT;

void BRT_conversation(BRT *FRC);
void BRT_setup(BRT *FRC);
void BRT_hello(BRT *FRC);
void BRT_listen(BRT *FRC);
void BRT_Brute_Force(BRT *FRC);
void BRT_respond(BRT *FRC);
int BRT_endcheck(BRT *FRC);
void BRT_cleanup(BRT *FRC);

#endif
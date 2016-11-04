/*-------------------------------------------------------------------------
Programmer: Sina Amini

Description:	Frequency Analysis Header file. Counts the frequency of
each character in a phrase provided by the user
Program:	Frequency Analysis
-------------------------------------------------------------------------*/

#ifndef _FREQUENCY_H_
#define _FREQUENCY_H_

typedef struct FRQ_
{
	std::string phrase;
	int frequencies[26];
	int Exit;
} FRQ;

void FRQ_conversation(FRQ *ANL);
void FRQ_setup(FRQ *ANL);
void FRQ_hello(FRQ *ANL);
void FRQ_listen(FRQ *ANL);
void FRQ_Analyze_Frequency(FRQ *ANL);
void FRQ_respond(FRQ *ANL);
int FRQ_endcheck(FRQ *ANL);
void FRQ_cleanup(FRQ *ANL);

#endif
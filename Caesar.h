/*-------------------------------------------------------------------------
Programmer: Sina Amini

Description:	Caesar Cypher Header file. Encrypts phrase M using Caesar
Cypher. Each character is shifted by N characters. Both M and N are
provided by the user.
Program:	Caesar Cypher
-------------------------------------------------------------------------*/

#ifndef _CAESAR_H_
#define _CAESAR_H_

typedef struct CSR_
{
	std::string phrase;
	int rotate;
	int Exit;
} CSR;

void CSR_conversation(CSR *BRA);
void CSR_setup(CSR *BRA);
void CSR_hello(CSR *BRA);
void CSR_listen(CSR *BRA);
void CSR_Caesar(CSR *BRA);
void CSR_respond(CSR *BRA);
int CSR_endcheck(CSR *BRA);
void CSR_cleanup(CSR *BRA);

#endif
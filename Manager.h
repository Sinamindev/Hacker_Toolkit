/*-------------------------------------------------------------------------
Programmer: Sina Amini

Description:	Manager header, repeatedly gets and runs the user's menu
selection until the user decides to quit 
Programs implimented:	Caesar Cypher, 
						Brute Force Decryption,
						Frequency Analysis
-------------------------------------------------------------------------*/

#ifndef _MANAGER_H_
#define _MANAGER_H_

typedef struct MGR_
{
	int choice; // whether user would like to exit or not
} MGR;

void MGR_conversation(MGR *obj);
void MGR_setup(MGR *obj);
void MGR_hello(MGR *obj);
void MGR_listen(MGR *obj);
void MGR_respond(MGR *obj);
int MGR_endcheck(MGR *obj);
void MGR_cleanup(MGR *obj);
void print_menu();

#endif
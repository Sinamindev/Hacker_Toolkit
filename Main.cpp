/*-------------------------------------------------------------------------
Programmer: Sina Amini

Description:	Main, Drives the Manager
Programs implimented:	Caesar Cypher, 
						Brute Force Decryption,
						Frequency Analysis
-------------------------------------------------------------------------*/

#include <stdio.h>
#include <iostream>
#include <string>
#include "Manager.h"
using namespace std;
#define DPRINTF printf

//main program driver
int main()
{
	MGR obj = { 0 }; //initializes MGR object

	MGR_conversation(&obj);

	return 0;
}

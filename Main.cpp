//This is the Alpha 1 version of the banking system
//Creators: Mircea Dumitrache
//This version includes the basic interface
#include<iostream>
#include<fstream>
#include<string>

#include"ConversationFunctions.h"

int main()
{
	
	Greetings();

	int loginOrOpen = isCurrent();


	Goodbye();

	system("pause");
	return 0;
}
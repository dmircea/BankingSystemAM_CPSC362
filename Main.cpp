//This is the Alpha 1 version of the banking system
//Creators: Mircea Dumitrache
//This version includes the basic interface
#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>

#include"clearCin.h"
#include"ConversationFunctions.h"
#include"Register.h"

int main()
{
	
	Greetings();

	Customer * user = nullptr;

	while (true)
	{
	    char login = isCurrent();
	    
	    if (login == 'y')
	    {

	    }
	    else if (login == 'n')
	    {
		   system("CLS");
		   std::cout << "Since you are not a returning customer, we would like you to register with us first." << std::endl;

		   user = registration(user);
	    }
	    else if (login == 'g')
	    {
		   break;
	    }
	}


	Goodbye();
	delete user;

	system("pause");
	return 0;
}

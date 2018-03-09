//This is the Alpha 1 version of the banking system
//Creators: Mircea Dumitrache
//This version includes the basic interface
#include<iostream>
#include<fstream>
#include<string>

#include"ConversationFunctions.h"
#include"Register.h"

int main()
{
	
	Greetings();

	int loginOrOpen = isCurrent();

	switch (loginOrOpen)
	{
	case 0:
	    std::cout << "You were given option " << loginOrOpen << std::endl;
	    break;
	case 1:
	    std::cout << "You were given option " << loginOrOpen << std::endl;
	    break;
	case 2:
	    std::cout << "You were given option " << loginOrOpen << std::endl;
	    break;
	}

	Goodbye();

	system("pause");
	return 0;
}

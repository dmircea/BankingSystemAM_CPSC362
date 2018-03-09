#pragma once
#include "Customer.h"

//This will include all the conversation functions.

void Greetings()
{
	std::cout << "Welcome the BankAM!" << std::endl;
}

void Goodbye()
{
	std::cout << "Thank you for using BankAM! Have a nice day!" << std::endl;
}

int isCurrent()
{
	//This function will ask the user if they are an existing or returning user
	char answer;
	int returnInt = 0; //automatic false

	while (true)
	{
		std::cout << "Are you a returning customer?\n"
			<< "Type 'y' for yes\n"
			<< "Type 'n' for no\n"
			<< "Type 'g' for go back\n" << std::endl;

		std::cin >> answer;

		if (!std::cin.fail())//If the input is not bad, do this
		{
			if (answer == 'y')
			{
				return 1;
			}
			else if (answer == 'n')
			{
				return 0;
			}
			else if (answer == 'g')
			{
				return 2;
			}
			else
			{
				std::cout << "Answer typed is not known. Please try again." << std::endl;
				std::cin.ignore(INT_MAX, '\n');
			}

		}
		else //flush and clean the pipe then try again
		{
			std::cout << "Oops! Something was typed wrong. Please try again!" << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
	}

	return returnInt;
}
#pragma once

//Here we will store the customer class

//Inlcudes below are the structures used for multivariable members of the Customer class
#include"Address.h"
#include"Name.h"
#include"Phone.h"


class Customer
{
public:




	Customer() 
	{

	}
	~Customer()
	{

	}
private:
	Address addressInfo;//Struct--> see Address.h header file
	Phone phoneInfo[4];	//Struct--> see Phone.h header file
						//Allows a total of 4 phone numbers per customer
	Name nameInfo;		//Struct--> see Name.h header file

	int age = 0;
	std::string email = ""; 

};
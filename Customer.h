#pragma once

//Here we will store the customer class

//Inlcudes below are the structures used for multivariable members of the Customer class
#include"Address.h"
#include"Name.h"
#include"Phone.h"


class Customer
{
public:

    //---------E-mail prototype member functions-------------------
    void setEmail(std::string);
    std::string getEmail();

    //---------Age prototype member functions--------------------
    int getAge();
    void setAge(int);

    //---------Genger prototype member function------------------
    char getGender();
    void setGender();

    //---------Address prototype member functions-------------------
    //----set functions------//
    void setNumberAddress(int);
    void setHouseNum(int);
    void setZipAddress(int);
    void setStreetAddress(std::string);
    void setCityAddress(std::string);
    void setStateAddress(std::string);
    //----get functions------//
    int getNumberAddress();
    int getHouseNum();
    int getZipAddress();
    std::string getStreetAddress();
    std::string getCityAddress();
    std::string getStateAddress();

    //----------Name prototype member functions--------------------
    //------set functions-------//
    void setFirstName(std::string);
    void setLastName(std::string);
    void setMiddleInit(char);
    //------get functions-------//
    std::string getFirstName();
    std::string getLastName();
    char getMiddleInit();

    //----------Phone prototype member functions------------------
    //-------set functions-------//
    void setAreaCode(int,int);
    void setPhoneNumber(int,int);
    void setType(Type, int);
    void setUsed(bool, int);
    //-------get functions-------//
    int getAreaCode(int);
    int getPhoneNumber(int);
    Type getType(int);
    bool getUsed(int);

	Customer() 
	{

	}
	~Customer()
	{

	}

	// Non-set/get Member functions

private:
	Address _addressInfo;//Struct--> see Address.h header file
	Phone _phoneInfo[4];	//Struct--> see Phone.h header file
						//Allows a total of 4 phone numbers per customer
	Name _nameInfo;		//Struct--> see Name.h header file

	int _age = 0;
	char _gender = ' ';
	std::string _email = ""; 

};

//----------E-mail scoped functions--------------------
void inline Customer::setEmail(std::string newEmail)
{
    _email = newEmail;
}
std::string inline Customer::getEmail()
{
    return _email;
}

//-----------Age scoped functions------------------------
int inline Customer::getAge()
{
    return _age;
}
void inline Customer::setAge(int newAge)
{
    _age = newAge;
}

//-----------Gender Scoped functions---------------------
char inline Customer::getGender()
{
    return _gender;
}
void inline Customer::setGender(char newGender)
{
    _gender = newGender;
}

//-----------Address Scoped functions SETTING------------------
void inline Customer::setNumberAddress(int newNumber)
{
    _addressInfo.number = newNumber;
}
void inline Customer::setHouseNum(int newNumber)
{
    _addressInfo.houseNum = newNumber;
}
void inline Customer::setZipAddress(int newZipcode)
{
    _addressInfo.zipcode = newZipcode;
}
void inline Customer::setStreetAddress(std::string newStreet)
{
    _addressInfo.street = newStreet;
}
void inline Customer::setStateAddress(std::string newState)
{
    _addressInfo.state = newState;
}
void inline Customer::setCityAddress(std::string newCity)
{
    _addressInfo.city = newCity;
}


//-----------Address Scoped functions GETTING------------------
int inline Customer::getNumberAddress()
{
    return _addressInfo.number;
}
int inline Customer::getHouseNum()
{
    return _addressInfo.houseNum;
}
int inline Customer::getZipAddress()
{
    return _addressInfo.zipcode;
}
std::string inline Customer::getStreetAddress()
{
    return _addressInfo.street;
}
std::string inline Customer::getStateAddress()
{
    return _addressInfo.state;
}
std::string inline Customer::getCityAddress()
{
    return _addressInfo.city;
}


//------------Name Scoped functions SETTING--------------------
void inline Customer::setFirstName(std::string newFirstName)
{
    _nameInfo.first = newFirstName;
}
void inline Customer::setLastName(std::string newLastName)
{
    _nameInfo.last = newLastName;
}
void inline Customer::setMiddleInit(char newMiddleInit)
{
    _nameInfo.middle = newMiddleInit;
}

//-------------Name Scoped functions GETTING---------------------
std::string inline Customer::getFirstName()
{
    return _nameInfo.first;
}
std::string inline Customer::getLastName()
{
    return _nameInfo.last;
}
char inline Customer::getMiddleInit()
{
    return _nameInfo.middle;
}

//------------Phone Scoped functions SETTING----------------------
void inline Customer::setAreaCode(int newAreaCode, int whichPhone)
{
    if (whichPhone < 4 && whichPhone >= 0)
    {
	   _phoneInfo[whichPhone].areaCode = newAreaCode;
    }
}
void inline Customer::setPhoneNumber(int newPhoneNum, int whichPhone)
{
    if (whichPhone < 4 && whichPhone >= 0)
    {
	   _phoneInfo[whichPhone].number = newPhoneNum;
    }
}
void inline Customer::setType(Type newType, int whichPhone)
{
    if (whichPhone < 4 && whichPhone >= 0)
    {
	   _phoneInfo[whichPhone].type = newType;
    }
}
void inline Customer::setUsed(bool newBool, int whichPhone)
{
    if (whichPhone < 4 && whichPhone >= 0)
    {
	   _phoneInfo[whichPhone].usable = newBool;
    }
}

//------------Phone Scoped functions GETTING--------------------------
int inline Customer::getAreaCode(int whichPhone)
{
    if (whichPhone < 4 && whichPhone >= 0)
    {
	   return _phoneInfo[whichPhone].areaCode;
    }
}
int inline Customer::getPhoneNumber(int whichPhone)
{
    if (whichPhone < 4 && whichPhone >= 0)
    {
	   return _phoneInfo[whichPhone].number;
    }
}
Type inline Customer::getType(int whichPhone)
{
    if (whichPhone < 4 && whichPhone >= 0)
    {
	   return _phoneInfo[whichPhone].type;
    }
}
bool inline Customer::getUsed(int whichPhone)
{
    if (whichPhone < 4 && whichPhone >= 0)
    {
	   return _phoneInfo[whichPhone].usable;
    }
}
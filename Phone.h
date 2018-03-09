#pragma once

//This struct contains the data for the phone number of the customer
enum Type { mobile, home, work };

struct Phone
{
	int areaCode = 0;
	int number = 0;
	Type type = home;
	bool usable = false;
};
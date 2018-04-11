#pragma once

//This struct contains the data for the phone number of the customer
enum Type { mobile, home, work };

struct Phone
{
	std::string areaCode = "0";
	std::string number = "0";
	Type type = home;
	bool usable = false;
};
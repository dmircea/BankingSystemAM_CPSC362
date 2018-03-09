#pragma once

//  This header file contains the registration functions.



//This function is used to show the options the 
//user can choose from and what has already been inputted.
void showOptionsMain(Customer * whatWeHave)
{
    //  Here is option one
    std::cout << "1. Input your name: " << whatWeHave->getFirstName() << " "
	   << whatWeHave->getMiddleInit() << " "
	   << whatWeHave->getLastName() << std::endl;

    //  Here is option two
    std::cout << "2. Input your phone. " << std::endl;
    for (int i = 0; i < 4; ++i)
    {
	   if (whatWeHave->getUsed(i) == true)
	   {
		  std::cout << "Phone #" << i << ": " << whatWeHave->getAreaCode(i) << " - "
			 << whatWeHave->getPhoneNumber(i) << " Type: "
			 << whatWeHave->getType(i) << std::endl;
	   }
    }

    //  Here is option three
    std::cout << "3. Input your e-mail: " << whatWeHave->getEmail() << std::endl;

    //  Here is option four
    std::cout << "4. Input your address: " << whatWeHave->getNumberAddress() << " "
	   << whatWeHave->getStreetAddress() << " Apt."
	   << whatWeHave->getHouseNum() << " , "
	   << whatWeHave->getCityAddress() << " , "
	   << whatWeHave->getStateAddress() << " , "
	   << whatWeHave->getZipAddress() << std::endl;

    //  Here is option five
    std::cout << "5. Input you age: " << whatWeHave->getAge() << std::endl;

    //  here is option six
    std::cout << "6. Input your gender: " << whatWeHave->getGender() << std::endl;


}


void registration()
{
    Customer * newCustomer = new Customer;
    



    delete newCustomer;
}
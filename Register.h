#pragma once

//  This header file contains the registration functions.



//This function is used to show the options the 
//user can choose from and what has already been inputted.
void showOptionsMain(Customer * whatWeHave)
{
    std::cout << "Please choose what you would like to fill in."
	   << "Type a number that corresponds with the choices below." << std::endl;

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
		  std::cout << "Phone #" << i+1 << ": " << whatWeHave->getAreaCode(i) << " - "
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

    //  Here is option seven
    std::cout << "7. Confirm your information and move forward." << std::endl;

    //  Here is option eight
    std::cout << "8. Go back to previous choice. (Warning, your information will not be saved!)." << std::endl;

    //  Here is option nine
    std::cout << "9. Exit the program. (Warning, your information will not be saved)." << std::endl;
}


void inputName(Customer * customerStore)
{
    std::string newName = "";
    std::cout << "What is your first name: ";
    std::cin >> newName;
    customerStore->setFirstName(newName);

    std::cout << "What is your last name: ";
    std::cin >> newName;
    customerStore->setLastName(newName);

    char newInit = ' ';
    std::cout << "What is your middle initial: ";
    std::cin >> newInit;
    customerStore->setMiddleInit(newInit);

    std::cout << std::endl;
}

//  This is the overloaded input phone function.
//  Use this when the customer is asked for where the phone will be put.
void inputPhone(Customer * customerStore, int place)
{
    while (true)
    {
	   std::string newNumber = "";
	   std::cout << "What is the phone number: ";
	   std::cin >> newNumber;
	   if (!std::cin.bad())
	   {
		  customerStore->setAreaCode(newNumber.substr(0,3), place);
		  customerStore->setPhoneNumber(newNumber.substr(3,newNumber.size()-1), place);
		  customerStore->setUsed(true, place);
		  return;
	   }
	   else
	   {
		  clearCin();
	   }
    }
}

//  This is the main input phone function.
//  Use this from the registration function.
void inputPhone(Customer * customerStore)
{
    
    while (true) {
	   int spot = 0;
	   std::cout << "Choose a place to input a phone number from the following: 1,2,3,4 (For deleting a number input a negative symbol before the number instead): ";
	   std::cin >> spot;
	   if (!std::cin.bad() && spot <= 4 && spot >= 1)
	   {
		  --spot;
		  inputPhone(customerStore, spot);
		  return;
	   }
	   else if (!std::cin.bad() && spot >= -4 && spot <= -1)
	   {
		  spot *= -1;
		  --spot;
		  customerStore->setUsed(false, spot);
		  return;
	   }
	   else
	   {
		  clearCin();
	   }
    }
}

void inputEmail(Customer * customerStore)
{
    std::string newEmail = "";
    std::cout << "what is your E-mail: ";
    std::cin >> newEmail;
    customerStore->setEmail(newEmail);

    std::cout << std::endl;
}

void inputAddress(Customer * customerStore)
{
    int newNum = 0;
    std::string newNames = "";

    std::cout << "What is your street number: ";
    std::cin >> newNum;
    customerStore->setNumberAddress(newNum);
    std::cin.ignore();  //Utilized to fix the getline problem on the next set of instructions

    std::cout << "What it your street name: ";
    std::getline(std::cin, newNames);
    customerStore->setStreetAddress(newNames);

    std::cout << "What is your city name: ";
    std::cin >> newNames;
    customerStore->setCityAddress(newNames);

    std::cout << "What are your state's initials: ";
    std::cin >> newNames;
    customerStore->setStateAddress(newNames);

    std::cout << "What is your zip code: ";
    std::cin >> newNum;
    customerStore->setZipAddress(newNum);

    std::cout << "What is your apartment number: ";
    std::cin >> newNum;
    customerStore->setHouseNum(newNum);

    std::cout << std::endl;
}

void inputAge(Customer * customerStore)
{
    int newAge = 0;
    std::cout << "What is your age: ";
    std::cin >> newAge;
    customerStore->setAge(newAge);

    std::cout << std::endl;
}

void inputGender(Customer * customerStore)
{
    char newGender = 'M';
    std::cout << "What is your gender: ";
    std::cin >> newGender;
    if (newGender == 'M' || newGender == 'F')
    {
	   customerStore->setGender(newGender);
    }
    else
    {
	   std::cout << "Wrong input detected. Please choose either M or F." << std::endl;
	   system("pause");
    }

    std::cout << std::endl;
    
}

void confirmations(Customer * customerStore)
{
    customerStore->printCustomerInfo();
    std::cout << std::endl << "Is this information correct?";
    system("pause");
}

void registration()
{
    Customer * newCustomer = new Customer();
    bool registering = true;
    int inputVar = 0;

    while (registering)
    {
	   showOptionsMain(newCustomer);
	   std::cin >> inputVar;

	   if (!std::cin.bad())
	   {
		  switch (inputVar)
		  {
		  case 1:
			 inputName(newCustomer);
			 break;
		  case 2:
			 inputPhone(newCustomer);
			 break;
		  case 3:
			 inputEmail(newCustomer);
			 break;
		  case 4:
			 inputAddress(newCustomer);
			 break;
		  case 5:
			 inputAge(newCustomer);
			 break;
		  case 6:
			 inputGender(newCustomer);
			 break;
		  case 7:
			 confirmations(newCustomer);
			 newCustomer->createFinalProfile();
			 break;
		  }
		  if (inputVar == 8)
		  {
			 delete newCustomer;
			 return;
		  }
		  else if (inputVar == 9)
		  {
			 //	 Should Close the Application. Only break out of loop for now.
			 delete newCustomer;
			 exit(0);
		  }
	   }
	   else
	   {
		  clearCin();
	   }
	   system("CLS");
    }


    delete newCustomer;
}
#include "Contact.hpp"
#include <iomanip>
#include <string>

void printElement(std::string s)
{
	if (s.length() > 10)
		s.replace(9, 1, ".");
	std::cout << std::setw(10) << s.substr(0, 10) << "|";
}

void Contact::setFirstName(std::string val) { _firstName = val; }
void Contact::setLastName(std::string val) { _lastName = val;}
void Contact::setNickName(std::string val) { _nickName = val; }
void Contact::setPhoneNumber(std::string val) { _phoneNumber = val;}
void Contact::setDark(std::string val) { _darkestSecret = val;}
void Contact::searchTable()
{
	printElement(_firstName);
	printElement(_lastName);
	printElement(_nickName);
}
void Contact::contacts()
{
	std::cout << "first name     : " << _firstName << std::endl;
	std::cout << "last name      : " << _lastName << std::endl;
	std::cout << "nick name      : " << _nickName << std::endl;
	std::cout << "phone num      : " << _phoneNumber << std::endl;
	std::cout << "darkest secret : " << _darkestSecret << std::endl;
}

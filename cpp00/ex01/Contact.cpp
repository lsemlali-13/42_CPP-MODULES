#include "Contact.hpp"
#include <iomanip>
#include <string>

void printg(std::string s)
{
	if (s.length() > 10)
		s.replace(9, 1, ".");
	std::cout << std::setw(10) << s.substr(0, 10) << "|";
}

void Contact::set_f(std::string val)
{
	_firstName = val;
}
void Contact::set_l(std::string val)
{
	_lastName = val;
}
void Contact::set_n(std::string val)
{
	_nickName = val;
}

void Contact::set_p(std::string val)
{
	_phoneNumber = val;
}

void Contact::set_d(std::string val)
{
	_darkestSecret = val;
}
void Contact::print_ci()
{
	printg(_firstName);
	printg(_lastName);
	printg(_nickName);
}
void Contact::print_nor()
{
	std::cout << "first name     : " << _firstName << std::endl;
	std::cout << "last name      : " << _lastName << std::endl;
	std::cout << "nick name      : " << _nickName << std::endl;
	std::cout << "phone num      : " << _phoneNumber << std::endl;
	std::cout << "darkest secret : " << _darkestSecret << std::endl;
}

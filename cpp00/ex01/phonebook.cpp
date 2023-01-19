#include "Phonebook.hpp"

void PhoneBook::printSearchTable(int i) { _contact[i].searchTable(); }

void PhoneBook::printAllContacts(int i) { _contact[i].contacts(); }

void PhoneBook::gatherContactInfo(int i)
{
	std::string VAL;

	std::cout << "enter first name : ";
	std::getline(std::cin, VAL);
	_contact[i].setFirstName(VAL);
	std::cout << "enter last name : ";
	std::getline(std::cin, VAL);
	_contact[i].setLastName(VAL);
	std::cout << "enter nick name : ";
	std::getline(std::cin, VAL);
	_contact[i].setNickName(VAL);
	std::cout << "enter phone number : ";
	std::getline(std::cin, VAL);
	_contact[i].setPhoneNumber(VAL);
	std::cout << "enter a darkest secret : ";
	std::getline(std::cin, VAL);
	_contact[i].setDark(VAL);
}

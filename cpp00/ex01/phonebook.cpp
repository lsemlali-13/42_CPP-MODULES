#include "Phonebook.hpp"

void PhoneBook::printSearchTable(int i) { _contact[i].searchTable(); }

void PhoneBook::printAllContacts(int i) { _contact[i].contacts(); }

void PhoneBook::gatherContactInfo(int i, std::string str)
{
	std::cout << "enter first name : ";
	std::getline(std::cin >> std::ws, str);
	_contact[i].setFirstName(str);
	std::cout << "enter last name : ";
	std::getline(std::cin >> std::ws, str);
	_contact[i].setLastName(str);
	std::cout << "enter nick name : ";
	std::getline(std::cin >> std::ws, str);
	_contact[i].setNickName(str);
	std::cout << "enter phone number : ";
	std::getline(std::cin >> std::ws, str);
	_contact[i].setPhoneNumber(str);
	std::cout << "enter a darkest secret : ";
	std::getline(std::cin >> std::ws, str);
	_contact[i].setDark(str);
}


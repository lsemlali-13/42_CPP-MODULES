#include "Phonebook.hpp"

void PhoneBook::print_cp(int i)
{
	_contact[i].print_ci();
}
void PhoneBook::print_cnor(int i)
{
	_contact[i].print_nor();
}

void PhoneBook::fill_c(int i, std::string str)
{
	std::cout << "enter first name : ";
	std::getline(std::cin >> std::ws, str);
	_contact[i].set_f(str);
	std::cout << "enter last name : ";
	std::getline(std::cin >> std::ws, str);
	_contact[i].set_l(str);
	std::cout << "enter nick name : ";
	std::getline(std::cin >> std::ws, str);
	_contact[i].set_n(str);
	std::cout << "enter phone number : ";
	std::getline(std::cin >> std::ws, str);
	_contact[i].set_p(str);
	std::cout << "enter a darkest secret : ";
	std::getline(std::cin >> std::ws, str);
	_contact[i].set_d(str);
}


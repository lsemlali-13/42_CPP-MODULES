#include "phonebook.hpp"

void printg(std::string s)
{
	if (s.length() > 10)
		std::cout << s.substr(0, 9) + '.' << "|";
	else
		std::cout << std::string(10 - s.length(), ' ') + s << "|";
}
int main()
{
	std::cout << "!! THE AMAZING PHONE BOOK !!" << std::endl;
	std::string str;
	PhoneBook phonebook;
	phonebook.contact = new(Contact[8]);
	int i = 0;
	std::string ind;
	int count = 0;
	long long int idx;
	while (1) {
		std::cout << "enter a command as follows 'ADD', 'SEARCH', 'EXIT' : ";
		if (!(std::getline(std::cin >> std::ws, str)))
			exit (0);
		if (str == "ADD")
		{
			if (i >= 8)
				i = 0;
			std::cout << "enter first name : ";
			std::getline(std::cin >> std::ws, phonebook.contact[i].first_name);
			std::cout << "enter last name : ";
			std::getline(std::cin >> std::ws, phonebook.contact[i].last_name);
			std::cout << "enter nick name : ";
			std::getline(std::cin >> std::ws, phonebook.contact[i].nick_name);
			std::cout << "enter phone number : ";
			std::getline(std::cin >> std::ws, phonebook.contact[i].phone_num);
			std::cout << "enter a darkest secret : ";
			std::getline(std::cin >> std::ws, phonebook.contact[i].darket_sec);
			i++;
			if (count < 8)
				count++;
		}
		else if (str == "SEARCH")
		{
			std::cout << "       idx|first_name| last_name| nick_name|" << std::endl;
			for (int j = 0; j < count; j++) {
				printg(std::to_string(j + 1));
				printg(phonebook.contact[j].first_name);
				printg(phonebook.contact[j].last_name);
				printg(phonebook.contact[j].nick_name);
				std::cout << std::endl;
			}
			std::cout << "chose a contact by writing its 'idx' : ";
			std::cin >> ind;
			idx = ind[0] - 48;
			if (ind.length() == 1 && idx <= count && idx >= 1) {
				std::cout << "first name     : " << phonebook.contact[idx - 1].first_name << std::endl;
				std::cout << "last name      : " << phonebook.contact[idx - 1].last_name << std::endl;
				std::cout << "nick name      : " << phonebook.contact[idx - 1].nick_name << std::endl;
				std::cout << "phone num      : " << phonebook.contact[idx - 1].phone_num << std::endl;
				std::cout << "darkest secret : " << phonebook.contact[idx - 1].darket_sec << std::endl;
			}
			else
				std::cout << "no such contact with that idx !! " << std::endl;
		}
		else if (str == "EXIT") {
			std::cout << "CONTACTS LOST !! " << std::endl;
			exit(0);
		}
	}
}
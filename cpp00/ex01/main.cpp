#include "Phonebook.hpp"

int main()
{
	std::cout << "!! THE AMAZING PHONE BOOK !!" << std::endl;
	std::string str;
	PhoneBook phonebook;
	int i = 0;
	std::string ind;
	int count = 0;
	long long int idx;
	while (1) {
		std::cout << "enter a command as follows 'ADD', 'SEARCH', 'EXIT' : ";
		while (1) {
			if (!(std::getline(std::cin, str)))
				exit(0);
			if (str.empty())
				std::cout << "enter a command as follows 'ADD', 'SEARCH', 'EXIT' : ";
			else
				break;
		}
		if (str == "ADD")
		{
			if (i >= CONTACT_SIZE)
				i = 0;
			phonebook.gatherContactInfo(i, str);
			i++;
			if (count < CONTACT_SIZE)
				count++;
		}
		else if (str == "SEARCH")
		{
			if (i == 0) {
				std::cout << "the Amazing Phonebook is empty try adding a contact first .\n";
				continue;
			}
			std::cout << "       idx| firstName|  lastName|  nickName|" << std::endl;
			for (int j = 0; j < count; j++) {
				std::cout << "         " << j + 1 << "|";
				phonebook.printSearchTable(j);
				std::cout << std::endl;
			}
			std::cout << "chose a contact by writing its 'idx' : ";
			std::getline(std::cin, ind);
			idx = ind[0] - 48;
			if (ind.empty()) {
				std::cout << "try writing something next time" << std::endl;
			}
			else if (ind.length() == 1 && idx <= count && idx >= 1) {
				phonebook.printAllContacts(idx - 1);
			}
			else
				std::cout << "no such _contact with that idx !! " << std::endl;
		}
		else if (str == "EXIT") {
			std::cout << "CONTACTS LOST !! " << std::endl;
			exit(0);
		}
	}
}
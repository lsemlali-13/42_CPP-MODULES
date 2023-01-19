#include "Phonebook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string COMMAND;
	std::string ind;
	int i = 0;
	int idx;
	int count = 0;

	system("clear");
	std::cout << GREEN << "      !! THE AMAZING PHONE BOOK !!" << RESET << std::endl << std::endl;
	while (1) {
		std::cout << "enter a command as follows 'ADD', 'SEARCH', 'EXIT' : ";
		while (1) {
			if (!(std::getline(std::cin, COMMAND)))
				exit(0);
			if (COMMAND.empty())
				std::cout << "try writing something at least ";
			else
				break;
		}
		if (COMMAND == "ADD")
		{
			if (i >= CONTACT_SIZE)
				i = 0;
			phonebook.gatherContactInfo(i);
			i++;
			if (count < CONTACT_SIZE)
				count++;
		}
		else if (COMMAND == "SEARCH")
		{
			if (i == 0) {
				std::cout << "the Phonebook is empty try adding a contact first .\n";
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
				std::cout << "Invalid idx !! " << std::endl;
		}
		else if (COMMAND == "EXIT") {
			std::cout << "CONTACTS LOST !! " << std::endl;
			exit(0);
		}
	}
}
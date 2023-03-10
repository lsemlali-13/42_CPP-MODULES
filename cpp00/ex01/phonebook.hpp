#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

# include "Contact.hpp"
# define CONTACT_SIZE 3
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

class PhoneBook {
public:
	void gatherContactInfo(int i);
	void printSearchTable(int i);
	void printAllContacts(int i);
private:
	Contact _contact[CONTACT_SIZE];
};

#endif
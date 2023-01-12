#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

# include "Contact.hpp"
# define CONTACT_SIZE 3

class PhoneBook {
public:
	void gatherContactInfo(int i, std::string str);
	void printSearchTable(int i);
	void printAllContacts(int i);
private:
	Contact _contact[CONTACT_SIZE];
};

#endif
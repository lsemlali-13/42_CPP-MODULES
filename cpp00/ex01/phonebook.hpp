#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

# include "Contact.hpp"
# define CONTACT_SIZE 3

class PhoneBook {
public:
	void fill_c(int i, std::string str);
	void print_cp(int i);
	void print_cnor(int i);
private:
	Contact _contact[CONTACT_SIZE];
};

#endif
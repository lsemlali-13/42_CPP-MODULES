#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact {
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_num;
		std::string darket_sec;
};

class PhoneBook {
	public:
		Contact* contact;
};

#endif
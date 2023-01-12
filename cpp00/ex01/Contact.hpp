#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

#include <iostream>

class Contact {
public:
	void set_f(std::string val);
	void set_l(std::string val);
	void set_n(std::string val);
	void set_p(std::string val);
	void set_d(std::string val);
	void print_ci();
	void print_nor();
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
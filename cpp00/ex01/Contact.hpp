#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

#include <iostream>

class Contact {
public:
	void setFirstName(std::string val);
	void setLastName(std::string val);
	void setNickName(std::string val);
	void setPhoneNumber(std::string val);
	void setDark(std::string val);
	void searchTable();
	void contacts();
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
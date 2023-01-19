#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

#include "Weapon.hpp"
#include <iostream>

class HumanB {
private:
	std::string	_name;
	Weapon*		_weapon;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack();
};

#endif
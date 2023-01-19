#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << _name + " attacks with their " + _weapon->getType() << std::endl;
}

HumanA::HumanA ( std::string name, Weapon &weapon ) {
	this->_name = name;
	this->_weapon = &weapon;
}

void HumanA::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }


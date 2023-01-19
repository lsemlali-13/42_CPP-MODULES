#include "HumanB.hpp"

void HumanB::attack() {
	std::cout << _name + " attacks with their " + _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }

HumanB::HumanB ( std::string name) {
	this->_name = name;
}
#include "Zombie.hpp"

void Zombie::namingZombie(std::string name) {this->name = name;}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
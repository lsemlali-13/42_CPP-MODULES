#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie zombie;

	zombie.namingZombie(name);
	zombie.announce();
}
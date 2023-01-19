#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* zombie = new(Zombie);

	zombie->namingZombie(name);
	return (zombie);
}

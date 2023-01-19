#include "Zombie.hpp"

int main()
{
	Zombie* z = newZombie("zombie");
	z->announce();
	randomChump("foo");
	delete (z);
}
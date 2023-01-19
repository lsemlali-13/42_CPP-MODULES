#include "Zombie.hpp"

int main()
{
	Zombie* z = newZombie("zombie");
	z->announce();
	randomChump("foo");
	system("leaks zombie");
}
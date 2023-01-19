#include "Zombie.hpp"

int main()
{
	Zombie* z = zombieHorde(5 ,"zombie");
	for (int i = 0; i < 5; i++)
		z[i].announce();
	delete [] (z);
}
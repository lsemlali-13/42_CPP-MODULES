#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>

class Zombie {
private:
	std::string name;
public:
	void announce( void );
	void namingZombie( std::string name );
};

Zombie* zombieHorde( int N, std::string name );
#endif
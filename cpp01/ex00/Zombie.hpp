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

Zombie* newZombie( std::string name );

void randomChump( std::string name );

#endif
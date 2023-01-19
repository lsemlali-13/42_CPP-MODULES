#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <iostream>

class Weapon {
private:
	std::string _type;
public:
	Weapon ( std::string type = "" );
	const std::string&	getType();
	void			setType( std::string type );
};

#endif
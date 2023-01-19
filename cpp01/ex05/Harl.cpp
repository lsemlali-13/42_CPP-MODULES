#include "Harl.hpp"

void Harl::_debug() { std::cout << "debuging !!\n"; }
void Harl::_info() { std::cout << "sending info\n"; }
void Harl::_warning() { std::cout << "warning \n"; }
void Harl::_error() { std::cout << "error 404\n"; }

void Harl::complain( std::string level ) {
	void (Harl::*memptr[4]) ();
	memptr[0] = &Harl::_debug;
	memptr[1] = &Harl::_info;
	memptr[2] = &Harl::_warning;
	memptr[3] = &Harl::_error;

	if (level == "DEBUG")
		(this->*(memptr[0]))();

}
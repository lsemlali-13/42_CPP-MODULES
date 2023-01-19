#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

std::string	replace_(std::string str, std::string rep, std::string with, size_t i)
{
	std::string toReturn = str;

	toReturn.erase(i, rep.length());
	toReturn.insert(i, with,0, with.length());
	return (toReturn);
}

std::string searchAndReplace(std::string line, std::string toReplace, std::string toReplaceWith)
{
	size_t f;

	f = line.find(toReplace);
	while (f != std::string::npos) {
		line = replace_(line, toReplace, toReplaceWith, f);
		f = line.find(toReplace, f + toReplaceWith.length());
	}
	return (line);
}

int main(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "you need 3 args\n";
		return (ac);
	}
	std::ifstream infile(av[1]);
	std::ofstream outfile(std::string(av[1]).append(".replace"));
	std::string content;
	std::string line;
	std::getline(infile, line, '\0');
	line = searchAndReplace(line, av[2], av[3]);
	outfile << line;
	return 0;
}
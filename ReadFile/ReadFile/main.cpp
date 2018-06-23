#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>


int main()
{
	std::ifstream fileIn("users.txt", std::ios::in);

	if(!fileIn)
	{
		std::cerr << "Could not read file" << std::endl;
		exit(EXIT_FAILURE);
	}	

	std::cout << std::left << std::setw(10) << "Name" << std::setw(14) << "ID" << std::endl;


	std::string name;
	int ID;

	while (fileIn >> name >> ID)
	{
		std::cout << std::left << std::setw(10) << name << std::setw(14) << ID << std::endl;
	}
}


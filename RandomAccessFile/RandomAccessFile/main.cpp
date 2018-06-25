#include <fstream>
#include <cstdlib>
#include "User.h"
#include <functional>
#include <iostream>



int main()
{
	User users[3] = {
		User(4, "john"),
		User(2, "bob"),
		User(24, "bill")
	};

	//creates ofstream object in binary output mode
	std::ofstream outFile("users.dat", std::ios::out | std::ios::binary);

	//Error handling
	if(!outFile)
	{
		std::cerr << "could not open file" << std::endl;
		exit(EXIT_FAILURE);
	}

	User emptyUser;

	for (size_t i = 0; i < 100; i++)
	{
		outFile.write(reinterpret_cast<const char*>(&emptyUser), sizeof(User));
	}
}
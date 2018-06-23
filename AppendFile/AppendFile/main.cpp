


#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
	std::ofstream outFile("test_file.txt", std::ios::app);

	if(!outFile)
	{
		std::cerr << "File could not be opened" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string input;

	std::cout << "text to be appended: ";
	std::cin >> input;

	outFile << input << std::endl;
	outFile.close();
}

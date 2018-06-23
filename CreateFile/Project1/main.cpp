#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>


int main()
{
	//contstructs an ofstream object associated with test_file.txt
	//ofstream is capable of file output opperations

	//ofstream should be used for output, ifstream for input and fstream if both are needed
	std::ofstream outFile("test_file.txt", std::ios::out);


	//exits if file could not be opened
	if(!outFile)
	{
		std::cerr << "File could not be opened \n"; //this gives an error with std::endl
		exit(EXIT_FAILURE); //Exit does not call deconstructors
	}

	std::cout << "Text to put in file: " << std::endl;

	std::string input;

	std::getline(std::cin, input);

	outFile << input << std::endl;
	outFile.close();
}



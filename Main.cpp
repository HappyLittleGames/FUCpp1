#include <iostream>
#include <fstream>
#include "FileFactory.h"

int main()
{

	std::cout << "\n\n<<<	--	Welcomen to the DesignMontören	--	>>>>\n" << std::endl;
	std::cout << "Designmontören can make singleton templates:" << std::endl;
	std::cout << "1 - c++ file" << std::endl;
	std::cout << "2 - c# file" << std::endl;
	std::cout << "3 - nothing" << std::endl;
	std::cout << "4 - exit" << std::endl;
	std::cout << "\nwhat file would you like to write?" << std::endl;

	int selection = 0;
	while (selection != 4)
	{	
		std::cin >> selection;
		if (FileFactory::TestFile(selection))
			std::cout << "made a file \n";
		else
			std::cout << "made nothing \n";
	}
	std::cout << "k, goodbay" << std::endl;

	return 0;
}
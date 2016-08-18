#include <iostream>
#include <fstream>

int main()
{
	std::ofstream myfile;
	myfile.open("example.cpp");
	myfile << "Writing this to a file.\n";
	myfile.close();
	return 0;
}
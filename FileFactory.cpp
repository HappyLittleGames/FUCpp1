#include "FileFactory.h"


File* FileFactory::TestFile(int type)
{	
	if (type == 1)
	{
		File* file = new File("cpp");

		// write some shitty test-file
		std::ofstream myfile("/files/example." + file->GetExtension());
		//myfile.open("/files/example." + file->GetExtension());
		myfile << "#include <iostream>";
		myfile << "\nclass Nothing {}";
		myfile.close();

		// MoveFile("/files/example." + file->GetExtension());

		system("explorer E:\\C++Proj\\FUCpp1\\FUCpp1\\files");
		return file;
	}

	else if (type == 2)
	{
		File* file = new File("cs");

		// write some shitty test-file
		std::ofstream myfile("example." + file->GetExtension(), std::ios::out | std::ios::in | std::ios::trunc);
		//myfile.open("/files/example." + file->GetExtension());
		myfile << "using System.collections";
		myfile << "\npublic class Nothing {}";
		myfile.close();

		system("explorer E:\\C++Proj\\FUCpp1\\FUCpp1\\files");
		return file;
	}

	// if nothing
	return nullptr;
}

void FileFactory::MoveFile(char fileName[])
{
	
	// crappy string to char[] conversions?
	/*
	char moveTo[] = "/file/" + fileName;
	std::cout << fileName << std::endl;

	rename(fileName, moveTo);
	*/
}

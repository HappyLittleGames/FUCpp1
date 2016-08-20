#pragma once
#include <fstream>
#include <iostream>
#include "File.h"

static class FileFactory
{
public:
	static File* TestFile(int type);

	static void MoveFile(char fileName[]);
};


#pragma once
#include <vector>
class File
{
public:
	File(std::string extension);
	~File();

	std::string GetExtension();

protected:
	std::string m_extension;
private:

};


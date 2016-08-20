#include "File.h"



File::File(std::string extension)
{
	m_extension = extension;
}


File::~File()
{
}

std::string File::GetExtension()
{
	return m_extension;
}



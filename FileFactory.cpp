#include "FileFactory.h"


File* FileFactory::TestFile(int type)
{	
	if (type == 1)
	{

		// write some shitty test-file
		File* file = new File("h");

		std::ofstream myFile("Files//Nothing." + file->GetExtension(), std::ios::out | std::ios::in | std::ios::trunc);
		myFile << "Nothing* Nothing::m_instance = nullptr;";
		myFile.close();
		delete file;


		file = new File("cpp");
		std::ofstream otherFile("Files//Nothing." + file->GetExtension(), std::ios::out | std::ios::in | std::ios::trunc);
		otherFile << "\nclass Nothing";
		otherFile << "\n{";
		otherFile << "\npublic:";
		otherFile << "\n	static Nothing* GetInstance()";
		otherFile << "\n	{";
		otherFile << "\n		if (m_instance != nullptr)";
		otherFile << "\n		{";
		otherFile << "\n			m_instance = new Nothing();";
		otherFile << "\n		}";
		otherFile << "\n		return m_instance";
		otherFile << "\n	}";
		otherFile << "\n	~Nothing();";
		otherFile << "\nprivate:";
		otherFile << "\n	Nothing m_nothing";
		otherFile << "\n	";
		otherFile << "\n}";
		otherFile.close();

		return file;
	}

	else if (type == 2)
	{
		File* file = new File("cs");

		// write some shitty test-file
		std::ofstream myFile("Files//example." + file->GetExtension(), std::ios::out | std::ios::in | std::ios::trunc);
		myFile << "using System;\n";
		myFile << "\npublic class Nothing {";
		myFile << "\n	private static Nothing m_instance;\n";
		myFile << "\n	private Nothing();\n";
		myFile << "\n	public static Singleton GetInstance() {";
		myFile << "\n		get {";
		myFile << "\n			if (m_instance != null) {";
		myFile << "\n				m_instance = new Nothing();";
		myFile << "\n			}";
		myFile << "\n			return m_instance;";
		myFile << "\n		}";
		myFile << "\n	}";
		myFile << "\n}";
		myFile.close();

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

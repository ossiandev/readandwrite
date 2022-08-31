#include <iostream>
#include <fstream>
#include <string>


namespace Algo
{
	template <typename T> 
	//Print and makes new row. 
	void Print(T t)
	{
		std::cout << t << "\n";
	}
	//Writes to a textfile
	void WriteToFile(std::string filepath)
	{
		std::ofstream file(filepath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();

	}
	//Reads from a textfile
	void ReadFromFile(std::string filepath)
	{
		std::string fileContent;
		std::ifstream file(filepath);
		while (std::getline(file, fileContent))
		{
			std::cout << "Filecontent: " << fileContent << "\n";
			Print(fileContent);

		}
		
	}
	
	
}


int main()
{
	Algo::Print(1450);
	Algo::WriteToFile("myfile.txt");
	Algo::ReadFromFile("myfile.txt");
}
#include <iostream>
#include <fstream>
#include <string>


namespace Algo
{
	template <typename T> 
	//Print and makes new row. 
	void Print(T t)
	{
		std::cout << number << "\n";
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

	
	
}


int main()
{
	Algo::Print(1450);
	Algo::WriteToFile("myfile.txt");
}
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

	void WriteToFile(std::string filepath)
	{
		std::ofstream file(filepath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();

	}

	std::string filepath1 = "myfile.txt";
	
}



int main()
{
	Algo::Print(1450);
	Algo::WriteToFile(Algo::filepath1);
}
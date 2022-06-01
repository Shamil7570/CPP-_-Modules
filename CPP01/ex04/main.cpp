#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::ofstream fout;
	std::ifstream fin;

	if (ac == 4)
	{
		std::string file(av[1]);
		std::string s1(av[2]);
		std::string s2(av[3]);
		std::string str;
		int pos = 0;

		fin.open(file);
		if (fin.is_open())
		{
			fout.open(file + ".replace");
			while (std::getline(fin, str))
			{
				while ((pos = str.find(s1)) != -1)
				{
					str.erase(pos, s1.length());
					str.insert(pos, s2);
				}
				fout << str;
				if (!fin.eof())
					fout << std::endl;
			}
		}
		else
			std::cout << "Error" << std::endl;
		fout.close();
		fin.close();
	}
	else
		std::cout << "Error" << std::endl;
}
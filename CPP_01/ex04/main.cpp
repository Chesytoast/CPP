#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av){
	std::fstream	ifs;
	std::string		out;
	std::ofstream	ofs;
	std::string		buffer;
	std::string		allFile;
	std::string		av2;
	std::string		av3;
	size_t			index;

	if (ac != 4)
		return (1);
	ifs.open(av[1]);
	if (ifs.fail()){
		std::cerr << "Input files does not exist or is located elsewhere" << std::endl;
		return 1;
	}
	while (std::getline(ifs, buffer)){
		allFile += buffer;
		if (!ifs.eof())
			allFile += '\n';
	}
	ifs.close();
	av2.assign(av[2]);
	av3.assign(av[3]);
	while (1){
		index = allFile.find(av[2]);
		if (index == std::string::npos)
			break ;
		allFile.erase(index, av2.size());
		allFile.insert(index, av3);
	}
	out.assign(av[1]);
	out.append(".replace");
	ofs.open(out);
	if (ofs.fail()){
		std::cerr << "Error while creating outfile" << std::endl;
		return 1;	
	}
	ofs << allFile;
	ofs.close();
}
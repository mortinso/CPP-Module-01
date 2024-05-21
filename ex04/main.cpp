/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:08:14 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 16:27:41 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "utils.hpp"

int	main(int argc, char **argv)
{
	if (hasErrors(argc, argv[2]))
		return (1);

	std::ifstream oldFile(argv[1]);
	if (!oldFile.good())
	{
		std::cout << "\e[91mError: Can't access file\e[0m" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	filename.append(".replace");
	std::ofstream newFile(filename.c_str());

	std::string line;

	while (getline(oldFile, line))
	{
		newFile << replaceLine(line, argv[2], argv[3]);
		if (!oldFile.eof())
			newFile << std::endl;
	}
	newFile.close();
	oldFile.close();
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:44:14 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 17:05:31 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	replaceLine(std::string line, const std::string s1, const std::string s2) {
	std::string	newLine;
	int	pos = line.find(s1);

	while (pos >= 0)
	{
		newLine = line.substr(0, pos) + s2 + line.substr(pos + s1.length(), -1);
		pos = newLine.find(s1);
		line = newLine;
		newLine.clear();
	}
	return line;
}

bool	hasErrors( int	argc, std::string s1) {
	if (argc != 4)
	{
		std::cout << "Wrong numbers of arguments!" << std::endl;
		std::cout << "Correct usage:" << std::endl;
		std::cout << "\t./notsed <filename> <string1> <string2>" << std::endl;
	}

	else if (s1.empty())
		std::cout << "Error: String1 must not be empty" << std::endl;

	else
		return (false);

	return (true);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:05:19 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/12 16:14:28 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	getIndex(std::string complaint)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (complaint.compare(levels[i]) == 0)
			return (i);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Too many complaints" << std::endl;
		return (1);
	}

	Harl complainer;
	switch (getIndex(argv[1])){
		case 0:
			complainer.complain("DEBUG");
		case 1:
			complainer.complain("INFO");
		case 2:
			complainer.complain("WARNING");
		case 3:
			complainer.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return (0);
}
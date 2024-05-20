/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:16:14 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 15:00:19 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string _name, Weapon& _weapon ) : name(_name), weapon(_weapon){
	//std::cout << "HumanA " << this->name << " constructed" << std::endl;
}

HumanA::~HumanA( void ) {
	//std::cout << "HumanA " << this->name << " destructed" << std::endl;
}

void	HumanA::attack( void ) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
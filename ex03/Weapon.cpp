/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:37:55 by aconti            #+#    #+#             */
/*   Updated: 2024/10/23 15:16:49 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "stick";
}
Weapon::~Weapon()
{
	std::cout<<"Weapon "<<this->_type<<" destroyed called"<<std::endl;	
}

Weapon::Weapon(std::string type) : _type(type)
{
	
}

const std::string	Weapon::getType()
{
	return(this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
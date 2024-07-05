/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:37:55 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 12:45:56 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	Weapon weapon(type);
}
Weapon::~Weapon()
{
	std::cout<<"Weapon "<<this->_type<<" destroyed called"<<std::endl;	
}

const std::string&	Weapon::getType() const
{
	return(this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
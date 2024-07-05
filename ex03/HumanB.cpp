/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:36:10 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 13:06:36 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout<<"HumanB "<<this->_name<<" created"<<std::endl;
}

HumanB::~HumanB()
{
	std::cout<<"HumanB "<<this->_name<<" destroyed called"<<std::endl;	
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	if (this->_weapon != NULL)
		std::cout<<this->_name<<" attacks with his "<<this->_weapon->getType()<<std::endl;
	else
		std::cout<<this->_name<<" attacks with his bare hands"<<std::endl;
}

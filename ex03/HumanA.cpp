/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:47:59 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 14:54:17 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	
}

HumanA::~HumanA()
{
	std::cout<<"HumanA "<<this->_name<<" destroyed called"<<std::endl;	
}

void HumanA::attack()
{
	std::cout<<this->_name<<" attacks with his "<<this->_weapon.getType()<<std::endl;
}
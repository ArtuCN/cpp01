/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:37:17 by aconti            #+#    #+#             */
/*   Updated: 2024/10/23 14:10:46 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "default";
}

Zombie::Zombie( std::string name )
{
	this->name = name;
}

Zombie::~Zombie( void )
{
	std::cout<<"Zombie "<<getName()<<" is dyiiiiiing"<<std::endl;
}

std::string Zombie::getName( void )
{
	return this->name;
}

void Zombie::setName( std::string name )
{
	this->name = name;
}

void Zombie::announce( void )
{
	std::cout<<getName()<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
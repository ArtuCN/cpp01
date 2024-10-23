/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:24:55 by aconti            #+#    #+#             */
/*   Updated: 2024/10/23 14:10:51 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		
		Zombie( void );//costruttore default
		Zombie( std::string name );//costruttore con nome
		~Zombie( void );//distruttore
		
		std::string getName( void );
		void setName( std::string name );
		void announce( void );

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
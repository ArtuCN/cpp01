/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:24:55 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 11:03:06 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		
		Zombie( void );//costruttore default
		Zombie( std::string name );//costruttore con nome
		~Zombie( void );//distruttore
		
		std::string getName( void );
		void setName( std::string name );
		void announce( void );
	private:
		std::string name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
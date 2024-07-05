/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:36:17 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 11:44:35 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define NUM 10

class Zombie
{
	private:
		std::string name;
	public:
		
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		
		std::string getName( void );
		void setName( std::string name );
		void announce( void );

};

Zombie* zombieHorde( int N, std::string name);

#endif
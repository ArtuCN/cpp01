/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:36:20 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 14:57:25 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

#define nullptr NULL

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon();
		~Weapon();
		Weapon(std::string type);
		const	std::string   getType();
		void	setType(std::string type);
};

#endif
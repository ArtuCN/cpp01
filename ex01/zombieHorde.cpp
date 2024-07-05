/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:37:25 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 11:38:16 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde ( int n, std::string name)
{
	Zombie* horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].setName(name);
	return horde;
}
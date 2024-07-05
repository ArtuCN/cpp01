/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:40:11 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 11:44:00 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(NUM, "Zombie");
	for (int i = 0; i < NUM; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
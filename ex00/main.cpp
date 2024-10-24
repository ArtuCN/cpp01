/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:04:17 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 11:18:47 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie, *zombie2;

	zombie = newZombie("EvilZombie");
	zombie->announce();
	zombie2 = new Zombie();
	zombie2->announce();
	randomChump("SmellyZombie");
	delete zombie2;
	delete zombie;
}
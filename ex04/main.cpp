/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:00:17 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 15:31:16 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedIsForLosers.hpp"


int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (0);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	replace(filename, s1, s2);
}
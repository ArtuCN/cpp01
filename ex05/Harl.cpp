/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:59:06 by aconti            #+#    #+#             */
/*   Updated: 2024/10/23 15:44:50 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable. I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int index = -1;
    for (int i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            index = i;
            break;
        }
    }

    switch (index)
	{
        case 0:
            (this->*functions[0])();
            break;
        case 1:
            (this->*functions[1])();
            break;
        case 2:
            (this->*functions[2])();
            break;
        case 3:
            (this->*functions[3])();
            break;
    }
}
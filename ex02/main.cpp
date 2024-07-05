/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:50:17 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 12:00:19 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string& ref = str;
	
	std::cout << "The memory adress of string variable is:\t" << &str << std::endl;
    std::cout << "The memory address held by stringPTR is:\t" << ptr << std::endl;
    std::cout << "The memory address held by stringREF is:\t" << &ref << std::endl;

	std::cout << "string variable is:\t" << str << std::endl;
	std::cout << "stringPTR value is:\t" << *ptr << std::endl;
	std::cout << "stringREF value is:\t" << ref << std::endl;
}
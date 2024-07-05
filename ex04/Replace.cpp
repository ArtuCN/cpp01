/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:06:17 by aconti            #+#    #+#             */
/*   Updated: 2024/07/05 15:37:22 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "sedIsForLosers.hpp"

void replace(std::string filename, std::string s1, std::string s2)
{
	std::string		line;
	std::string		str;
	std::ifstream	MyFile(filename.c_str());
	if (MyFile.is_open())
	{
		std::ofstream FileOut((filename + ".replace").c_str());
		while(getline(MyFile, line))
		{
			str += line;
			if (!MyFile.eof())
				str += "\n";
		}
		size_t pos = str.find(s1);
		while (pos < str.length())
		{
			str.erase(pos, s1.length());
			str.insert(pos, s2);
			pos = str.find(s1, pos + s2.length()); 
		}
		FileOut << str;
		MyFile.close();
		FileOut.close();
	}
	else
		std::cout << "Error: Could not open file" << std::endl;
}
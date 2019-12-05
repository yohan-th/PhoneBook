/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:28:06 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/04 22:28:41 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string searchnreplace(std::string line, std::string s1, std::string s2)
{
	int			start = 0;
	size_t		size = s1.size();

	std::string tmp = line;
	while ((start = tmp.find(s1)) != -1)
		tmp.replace(start, size, s2);
	return (tmp);
}

int		main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout << "Usage: [filename] [string_to_search] [string_to_replace]" << std::endl;
		return (1);
	}

	std::string path = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

  	if (s1.empty() || s2.empty())
  	{
		std::cout << "String to search/replace can't be empty" << std::endl;
		return (1);
  	}

  	std::ifstream src_file;
 	std::ofstream new_file;
 	std::string line;

	src_file.open(path, std::ios::in);
	if (!src_file.is_open())
	{
		std::cout << "File " << src_file << " does not exist" << std::endl;
		return (1);
	}

  	new_file.open(path + ".replace", std::ios::out | std::ios::trunc);
  	if (!new_file.is_open())
  	{
		std::cout << "Can't create " << path << ".replace file" << std::endl;
		return (1);
  	}

  	while (std::getline(src_file, line))
  	{
  		new_file << searchnreplace(line, s1, s2);
  		if (!src_file.eof())
			new_file << std::endl;
  	}

  	src_file.close();
  	new_file.close();
  	return (0);
}

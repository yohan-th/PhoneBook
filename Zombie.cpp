/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:56:53 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/03 17:56:54 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	this->announce(name, type);
}

Zombie::~Zombie(void)
{
	std::cout << "Luckely all zombies are dead now !" << std::endl;
}

void Zombie::announce(std::string name, std::string type)
{
	std::cout << "<" << name << " (" << type << ")> Brraiiiinnnsss..." << std::endl;
}
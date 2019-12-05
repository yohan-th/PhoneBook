/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 18:26:24 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/03 18:26:26 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->_horde = new Zombie[N];
	this->_nb_zombies = N;
	std::string names[5] = {"Bob", "Tim", "Jul", "Pet", "Kat"};
	srand (time(NULL));
	int i = 0;
	while (i < N)
	{
		this->_horde[i].setName(names[rand() % 4]);
		this->_horde[i].setType("evil");
		i++;
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_horde;
}

void	ZombieHorde::announce(void)
{
	int i = 0;
	while (i < this->_nb_zombies)
		this->_horde[i++].announce();
}
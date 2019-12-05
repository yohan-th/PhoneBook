/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 18:26:24 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/03 18:26:26 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(Zombie *zombie, std::string type)
{
	zombie->type = type;
}

void	ZombieEvent::saveZombieType(std::string type)
{
	this->_svdtype = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie;
	if (this->_svdtype.empty())
		zombie = new Zombie(name);
	else
		zombie = new Zombie(name, this->_svdtype);
	return (zombie);
}

Zombie	*ZombieEvent::randomChump(std::string name)
{
	Zombie* randZombie;

	randZombie = this->newZombie(name);
	return (randZombie);
}
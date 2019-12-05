/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 18:18:26 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/03 18:18:27 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main(void)
{
	Zombie zombie1("yohan", "evil");
	zombie1.announce();

	ZombieEvent events = ZombieEvent();
	events.saveZombieType("evil");
	std::string names[5] = {"Bob", "Tim", "Jul", "Pet", "Kat"};
	Zombie *zombie2;
	Zombie *zombie3;
	srand (time(NULL));
	zombie2 = events.randomChump(names[rand() % 4]);
	zombie3 = events.randomChump(names[rand() % 4]);
	zombie2->announce();
	zombie3->announce();

	events.setZombieType(&zombie1, "good");
	zombie1.announce();

	delete zombie2;
	delete zombie3;
    return (1);
}
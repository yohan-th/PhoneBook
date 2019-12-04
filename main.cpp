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
	Zombie zombie1("bob", "evil");

	ZombieEvent events = ZombieEvent();

	events.setZombieType(&zombie1, "good");

    return (1);
}
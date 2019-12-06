/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 15:17:10 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/06 15:17:12 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int     main(void)
{
	FragTrap player1("bob");
	FragTrap player2("alice");

	player1.rangedAttack("alice");
	player2.takeDamage(20);
	player2.meleeAttack("bob");
	player1.takeDamage(99999);

	player1.beRepaired(99999);
	player1.vaulthunter_dot_exe("bob");
    return (1);
}
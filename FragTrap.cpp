/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 15:16:53 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/06 15:16:55 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "FR4G-TP " << name << " has been created" << std::endl;
	this->name = name;
	this->hit_point = 100;
	this->maxhit_point = 100;
	this->energy_point = 100;
	this->max_energy_point = 100;
	this->level = 1;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP " << this->name << " has been deleted" << std::endl;
}

FragTrap::FragTrap(FragTrap const & object)
{
	*this = object;
}

FragTrap & FragTrap::operator=(FragTrap const & object)
{
	std::cout << "FR4G-TP " << object.name << " clone has been created" << std::endl;
	this->hit_point = object.hit_point;
	this->maxhit_point = object.maxhit_point;
	this->energy_point = object.energy_point;
	this->max_energy_point = object.max_energy_point;
	this->level = object.level;
	this->name = object.name;
	this->melee_attack_damage = object.melee_attack_damage;
	this->ranged_attack_damage = object.ranged_attack_damage;
	this->armor_damage_reduction = object.armor_damage_reduction;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const target)
{
	if (this->hit_point == 0)
		std::cout << "FR4G-TP " << this->name << " is dead and can't attack " << target << std::endl;
	else
		std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->ranged_attack_damage << " points of damage !" << std::endl;
}

//le suffix "this->" est optionel
void	FragTrap::meleeAttack(std::string const & target)
{
	if (hit_point == 0)
		std::cout << "FR4G-TP " << name << " is dead and can't attack " << target << std::endl;
	else
		std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing " << ranged_attack_damage << " points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->hit_point == 0)
		std::cout << "FR4G-TP " << this->name << " already dead" << std::endl;
	else if (amount <= armor_damage_reduction)
		std::cout << "FR4G-TP " << this->name << " is protect by it's armor" << std::endl;
	else if (this->hit_point <= (amount - this->armor_damage_reduction))
	{
		std::cout << "FR4G-TP " << this->name << " has just been killed" << std::endl;
		this->hit_point = 0;
	}
	else
	{
		this->hit_point -= (amount - this->armor_damage_reduction);
		std::cout << "FR4G-TP " << this->name << " got " << amount - this->armor_damage_reduction << " damage. Current HP: " << this->hit_point << std::endl;
	}
}

//le suffix "this->" est optionel
void	FragTrap::beRepaired(unsigned int amount)
{
	if (hit_point == maxhit_point)
		std::cout << "FR4G-TP " << this->name << " HP is already full" << std::endl;
	else if ((hit_point + amount) >= maxhit_point)
	{
		std::cout << "FR4G-TP " << this->name << " health is maximum" << std::endl;
		hit_point = maxhit_point;
	}
	else
	{
		hit_point += amount;
		std::cout << "FR4G-TP " << this->name << " health is " << hit_point << " HP" << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const target)
{
	if (hit_point == 0)
		std::cout << "FR4G-TP " << name << "is dead and can't do random attack" << std::endl;
	if (energy_point < 25)
		std::cout << "FR4G-TP " << name << " has not enought energy point";
	else
	{
		energy_point -= 25;
		srand (time(NULL));
		std::string rdm_attack[5] = {"hard", "very hard", "very very hard", "very very very hard", "very very very very hard"};
		std::cout << "FR4G-TP " << name << " attacks " << target << " hitting " << rdm_attack[rand() % 4] << " on the face" << std::endl;
	}
}
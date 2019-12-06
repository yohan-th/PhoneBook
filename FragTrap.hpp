/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 15:17:02 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/06 15:17:03 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

# include <string>
# include <iostream>

class FragTrap
{
	public:
		int hit_point;
		int maxhit_point;
		int energy_point;
		int max_energy_point;
		int level;
		int melee_attack_damage;
		int ranged_attack_damage;
		int armor_damage_reduction;

		std::string	name;

		FragTrap(std::string name);
		FragTrap(FragTrap const & object); //mettre à Jour l'objet
		FragTrap & operator=(FragTrap const & object);
		~FragTrap(void);

		void	rangedAttack(std::string const target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const target);

};


#endif
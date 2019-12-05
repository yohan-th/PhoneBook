/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:51:49 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/03 17:51:52 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <string>
# include <iostream>

class Zombie {

	public:
		Zombie(std::string name, std::string type="evil");
		~Zombie();

		std::string name;
		std::string type;

		void	announce(void);
};

#endif
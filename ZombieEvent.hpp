/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:58:19 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/03 17:58:20 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_CLASS_H
# define ZOMBIEEVENT_CLASS_H

# include "Zombie.hpp"

class ZombieEvent{
	public:
		void	setZombieType(Zombie *zombie, std::string type);
		void	saveZombieType(std::string type);
		Zombie	*newZombie(std::string name);

		Zombie	*randomChump(std::string name);

	private:
		std::string _svdtype;
};

#endif
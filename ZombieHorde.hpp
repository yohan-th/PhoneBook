/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:58:19 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/03 17:58:20 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_CLASS_H
# define ZOMBIEHORDE_CLASS_H

# include "Zombie.hpp"

class ZombieHorde{
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void	announce(void);

	private:
		Zombie	*_horde;
		int 	_nb_zombies;

};

#endif
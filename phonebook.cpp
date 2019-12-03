/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:23:20 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/02 22:23:22 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

void	search_contact(Contact contacts[8], int nb_contact, std::string command)
{
	std::cout << "|     index|" << "first name|" << " last name|";
	std::cout << "  nickname|" << std::endl;
	int i = 1;
	while (i <= nb_contact)
		contacts[i++ - 1].print_contact();
	std::cout << "Enter index for more information:";
	std::getline(std::cin, command);
	int k = atoi(command.c_str());
	if (k <= 0 || k > i)
		std::cout << "You entered invalid index" << std::endl;
	else
		contacts[k - 1].print_contact_full();
}

int		add_contact(Contact contacts[8], int nb_contact)
{
	if (nb_contact >= 8)
		std::cout << "Phone Book is full" << std::endl;
	else
		contacts[nb_contact].add_contact(nb_contact + 1);
	return (nb_contact + 1);
}

int		main(void)
{
	int 		nb_contact;
	Contact		contacts[8];

	nb_contact = 0;
	std::string command = "";
	while (command.compare("EXIT") != 0)
	{
		// prompt for a command
		std::cout << "PhoneBook $> ";
		std::getline(std::cin, command);
		if (command.compare("EXIT") == 0)
			return (0);
		else if (command.compare("ADD") == 0)
			nb_contact = add_contact(contacts, nb_contact);
		else if (command.compare("SEARCH") == 0)
			search_contact(contacts, nb_contact, command);
		else
		{
			std::cout << command << " : Invalid command." << std::endl;
			std::cout << "Usage : ADD, SEARCH, EXIT." << std::endl;
		}
	}
	return 0;
}
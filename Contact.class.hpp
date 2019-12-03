/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:23:35 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/02 22:23:37 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>


class Contact
{

	public:

		void	add_contact(int i);
		void	print_contact(void);
		void	print_contact_full(void);

	private:

		int 		index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;

		void		readline(std::string text, std::string *param);
		std::string create_output(std::string text);

};

#endif
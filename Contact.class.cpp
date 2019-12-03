/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ythollet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:23:58 by ythollet          #+#    #+#             */
/*   Updated: 2019/12/02 22:24:01 by ythollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>


void	Contact::readline(std::string text, std::string *param) {
	std::string str;

	std::cout << "Enter " << text << " : ";
	while (1)
	{
		std::getline (std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "[!]Empty field is not allowed." << std::endl;
			std::cout << "Enter " << text << " : ";
		}
		else
		{
			*param = str;
			break;
		}
	}
}

void	Contact::add_contact(int i) {
	index = i;

	readline("first name", &first_name);
	readline("last name", &last_name);
	readline("nick name", &nickname);
	readline("login", &login);
	readline("postal address", &postal_address);
	readline("email address", &email_address);
	readline("phone number", &phone_number);
	readline("birthday date", &birthday_date);
	readline("favorite meal", &favorite_meal);
	readline("underwear color", &underwear_color);
	readline("darkest secret", &darkest_secret);
};

std::string Contact::create_output(std::string text) {
	std::string str;

	if(text.length() > 10) {
		std::string str = text.substr(0,9);
		str = str + '.';
		return(str);
	}
	if(text.length() < 10) {
		std::string str1 (10 - text.length(), ' ');
		str = str1 + text;
		return(str);
	}
	return(text);
}

void	Contact::print_contact(void) {
	std::cout << "|         " << index << "|";
	std::cout << create_output(first_name) << "|";
	std::cout << create_output(last_name) << "|";
	std::cout << create_output(nickname) << "|" << std::endl;
}

void	Contact::print_contact_full(void){
	std::cout << "first name        : " << first_name << std::endl;
	std::cout << "last name         : " << last_name << std::endl;
	std::cout << "nick name         : " << nickname << std::endl;
	std::cout << "login             : " << login << std::endl;
	std::cout << "postal address    : " << postal_address << std::endl;
	std::cout << "email address     : " << email_address << std::endl;
	std::cout << "phone number      : " << phone_number << std::endl;
	std::cout << "birthday date     : " << birthday_date << std::endl;
	std::cout << "favorite meal     : " << favorite_meal << std::endl;
	std::cout << "underwear color   : " << underwear_color << std::endl;
	std::cout << "darkest secret    : " << darkest_secret << std::endl;
}

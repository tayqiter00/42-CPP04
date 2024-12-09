/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:03:06 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 15:00:24 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Some animal")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal &obj) : _type(obj._type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal	&Animal::operator=(Animal const &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	std::cout << "Animal copy assignment operator called\n";
	return (*this);	
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

void	Animal::makeSound(void) const
{
	std::cout << "General animal noises\n";
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

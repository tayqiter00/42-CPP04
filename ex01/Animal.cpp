/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:03:06 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 15:42:54 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**
 * This initializes _type directly rather than default constructing it and
 * then assigning a new value.
 * 
 * Also allows you to initialize constant members or references, which must
 * be initialized at the time of construction
 */
Animal::Animal(void) : _type("some animal")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal parameterized constructor called\n";
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << "Animal copy constructor called\n";
}

Animal	&Animal::operator=(Animal const &obj)
{
	if (this != &obj)
		this->_type = obj._type;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:32:00 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 15:03:35 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called\n";	
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(Dog const &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	std::cout << "Dog copy assignment operator called\n";
	return (*this);	
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";	
}

void	Dog::makeSound(void) const
{
	std::cout << "The dog says: woof woof\n";	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:32:00 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 15:50:54 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called\n";	
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog parameterized constructor called\n";	
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(Dog const &obj)
{
	this->_type = obj._type;
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

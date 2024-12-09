/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:32:00 by qtay              #+#    #+#             */
/*   Updated: 2024/09/24 14:13:23 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called\n";	
}

Dog::Dog(std::string type) : Animal(type), _brain(new Brain())
{
	std::cout << "Dog parameterized constructor called\n";	
}

Dog::Dog(const Dog &obj) : Animal(obj) // Call the base class copy constructor
{
	this->_brain = new Brain(*obj._brain);
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(Dog const &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
		delete this->_brain;
		this->_brain = new Brain(*obj._brain);
	}
	return (*this);	
}

Dog::~Dog(void)
{
	delete this ->_brain;
	std::cout << "Dog destructor called\n";	
}

void	Dog::makeSound(void) const
{
	std::cout << "The dog says: woof woof\n";	
}

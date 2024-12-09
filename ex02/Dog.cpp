/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:32:00 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 16:06:32 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal(), _brain(new Brain())
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called\n";	
}

Dog::Dog(const Dog &obj) : AAnimal(obj)
{
	this->_brain = new Brain(*obj._brain);
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(Dog const &obj)
{
	if (this != &obj)
	{
		AAnimal::operator=(obj);
		delete this->_brain;
		this->_brain = new Brain(*obj._brain);
		std::cout << "Dog copy assignment operator called\n";
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


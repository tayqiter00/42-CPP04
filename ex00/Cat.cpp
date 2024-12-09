/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:09:06 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 15:48:57 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat default constructor called\n";	
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat parameterized constructor called\n";	
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat copy constructor called\n";
}

/**
 * if (this != &obj)
 */
Cat	&Cat::operator=(Cat const &obj)
{
	this->_type = obj._type;
	std::cout << "Cat copy assignment constructor called\n";
	return (*this);	
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";	
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat says: meow meow\n";	
}

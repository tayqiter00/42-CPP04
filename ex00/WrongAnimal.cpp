/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:44:22 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 15:26:02 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Some wrong animal")
{
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
	std::cout << "Animal copy constructor called\n";
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &obj)
{
	this->_type = obj._type;
	return (*this);	
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong animal destructor called\n";
}
void	WrongAnimal::makeSound(void) const
{
	std::cout << "General wrong animal noises\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

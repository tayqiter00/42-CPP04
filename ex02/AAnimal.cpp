/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:03:06 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 15:49:03 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Some aanimal")
{
	std::cout << "AAnimal default constructor called\n";
}

AAnimal::AAnimal(const AAnimal &obj) : _type(obj._type)
{
	std::cout << "AAnimal copy constructor called\n";
}

AAnimal	&AAnimal::operator=(AAnimal const &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	std::cout << "AAnimal copy assignment operator called\n";
	return (*this);	
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called\n";
}
// void	Animal::makeSound(void) const
// {
// 	std::cout << "General animal noises\n";
// }

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

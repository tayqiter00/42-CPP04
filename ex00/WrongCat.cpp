/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:53:31 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 15:19:49 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Wrongcat")
{
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat parameterized constructor called\n";	
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	*this = obj;
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat	&WrongCat::operator=(WrongCat const &obj)
{
	this->_type = obj._type;
	return (*this);	
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called\n";	
}

void	WrongCat::makeSound(void) const
{
	std::cout << "The WrongCat says: wrongmeow wrongmeow\n";	
}
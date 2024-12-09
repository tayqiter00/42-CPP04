/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:53:31 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 15:05:09 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	*this = obj;
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat	&WrongCat::operator=(WrongCat const &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	std::cout << "WrongCat copy assignment operator called\n";
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
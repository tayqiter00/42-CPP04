/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:07:12 by qtay              #+#    #+#             */
/*   Updated: 2024/09/24 15:30:04 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called\n";
}
/**
 * Copy constructors in C++ perform a shallow copy of the class members.
 * This means only the address of the array is copied, not its content.So a
 * for loop is needed to copy the contents element-by-element. This also avoids
 * sharing memory.
 */
Brain::Brain(const Brain &obj)
{
	for (size_t i = 0; i < MAX_IDEAS; i++)
		this->_ideas[i] = obj._ideas[i];
	std::cout << "Brain copy constructor called\n";
}

/**
 * Arrays don't support direct assignment: expression must be a modifiable lvalue
 */
Brain	&Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (size_t i = 0; i < MAX_IDEAS; i++)
			this->_ideas[i] = obj._ideas[i];
	}
    std::cout << "Brain copy assignment operator called\n";
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}

// void	Brain::setBrainValue(std::string idea)
// {
// 	this->_ideas[0] = idea;
// }

// std::string	Brain::getBrainValue(void)
// {
// 	return (this->_ideas[0]);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:07:12 by qtay              #+#    #+#             */
/*   Updated: 2024/11/08 23:31:03 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called\n";
}
/**
 * Or simply *this = obj but it seems that copying explicitly is good practice.
 * It's actually just using the Brain copy assignment operator below.
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

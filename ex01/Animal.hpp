/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:01:40 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 15:32:23 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

/**
 * Virtual destructors allow resources to be cleaned up properly when
 * polymporphism is involved. Ensures the derived class is deleted first
 * then the base class.
 */
class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(const Animal &obj);
		Animal	&operator=(Animal const &obj);
		virtual	~Animal(void);
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};

#endif

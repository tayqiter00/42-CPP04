/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:01:40 by qtay              #+#    #+#             */
/*   Updated: 2024/11/09 00:46:07 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>
#include <type_traits>

/**
 * We can make a Class virtual by giving it at least one pure virtual function:
 * 		virtual void	makeSound(void) = 0;
 * 
 * Abstract classes cannot be instantiated, unless you use pointers or
 * references.
 * 
 * If we do not override the pure virtual function in the derived class, then
 * the derived class also becomes an abstract class
 */
class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal &obj);
		AAnimal	&operator=(AAnimal const &obj);
		virtual ~AAnimal(void);
		std::string	getType(void) const;
		virtual void	makeSound(void) = 0;
};

#endif

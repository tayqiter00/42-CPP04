/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:01:40 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 14:56:51 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

/**
 * "Protected" allows inherited children to access those variables too.
 * 
 * A virtual method will be overriden by a derived class' custom method.
 * 
 * A virtual destructor is used to free up the memory space allocated by 
 * the derived class object/instance while deleting instances of the derived
 * class using a base class pointer object. A base class destructor use the
 * virtual keyword to ensure both base class and the derived class destructor
 * will be called at run time, but it calls the derived class first and then
 * base class to release the space occupied by both destructors.
 *
 * The virtual keyword is not needed for constructors as they don't support
 * runtime polymorphism. They are responsible for creating instances of a
 * class and are not meant to be overridden.
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

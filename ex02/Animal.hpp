/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:01:40 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 15:51:14 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(const Animal &obj);
		Animal	&operator=(Animal const &obj);
		virtual ~Animal(void);
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};

#endif

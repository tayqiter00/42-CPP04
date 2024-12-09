/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:09:08 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 15:32:35 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat(void);
		Cat(const Cat &obj);
		Cat	&operator=(const Cat &obj);
		~Cat(void);
		void	makeSound(void) const;
		Brain	*getBrainAddr(void) const;
// 		std::string	getBrainVal(void) const;
// 		void	setBrainVal(std::string value) const;
};

#endif

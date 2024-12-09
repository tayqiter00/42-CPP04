/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:07:27 by qtay              #+#    #+#             */
/*   Updated: 2024/09/24 15:30:09 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# define MAX_IDEAS 100

class Brain
{
	private:
		std::string	_ideas[MAX_IDEAS];
	public:
		Brain(void);
		Brain(Brain const &obj);
		Brain	&operator=(Brain const &obj);
		~Brain(void);
		// void	setBrainValue(std::string idea);
		// std::string	getBrainValue(void);
};

#endif
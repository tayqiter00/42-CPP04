/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:19:26 by qtay              #+#    #+#             */
/*   Updated: 2024/12/05 22:47:52 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

// template <typename T>
// void instantiate(T&)
// {
// }

/**
 * std::boolalpha require C++11: stream manipulator that allows boolean values
 * to be printed as true/false.
 * 
 * std::is_abstract<T> is a type trait that checks whether the type T is an
 * abstract class
 * 
 * template is used to create functions that can operate with any data type
 * 
 * (note: this compilation error is left intentionally for testing purposes)
 */
int main()
{
	// std::cout << std::boolalpha;
	// std::cout << "Is the AAnimal class abstract?: " << std::is_abstract<AAnimal>::value << std::endl;
	AAnimal	test; // This will fail during compilation, showing that it's abstract
	// instantiate(AAnimal()); // this as well (C++11)
	return (0);
}

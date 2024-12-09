/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:19:26 by qtay              #+#    #+#             */
/*   Updated: 2024/12/07 17:16:11 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

/**
 * Must use pointers (or references) when dealing with runtime polymorphism. This
 * allows the object to be created dynamically, which is necessary when the exact
 * type of the object is not known at compile time. Here, the Animal class is
 * "converted" to a Dog or a Cat class at runtime.
 * 
 * If you don't use pointers (or references), object slicing will occur when you
 * assign Dog/Cat to Animal (derived to base class). This is when the base class
 * part of the derived object is copied, and the derived class-specific data and
 * methods are "sliced off". In our case, Dog/Cat will not be able to make the
 * correct sounds.
 * 
 * This also allows virtual/dynamic dispatch where their respective virtual
 * functions can be properly called (meow or woof). Virtual dispatch is when a base
 * class pointer or reference is used to call a virtual function.
 */
int main()
{
	const int	SIZE = 4;
	Animal		*animals[SIZE]; // no constructors called here

	for (size_t i = 0; i < SIZE / 2; ++i)
		animals[i] = new Dog();
	for (size_t i = SIZE / 2; i < SIZE; ++i)
		animals[i] = new Cat();
    for (size_t i = 0; i < SIZE; ++i)
        animals[i]->makeSound();
    for (size_t i = 0; i < SIZE; ++i)
		delete animals[i];

	std::cout << "\n[ DEEP COPY CHECK]\n";
	// ensure deep copy
	// {
	// 	Cat	originalCat;
	// 	// Cat	copiedCat = originalCat; // this method will invoke the Animal->Brain->Cat copy constructors
	// 	Cat	copiedCat; // this method will invoke Animal->Brain->Cat default constructors
	// 	copiedCat = originalCat; 
	// 	std::cout << "\nOriginal Cat Brain ptr: " << originalCat.getBrainAddr() << std::endl;
	// 	std::cout << "Copied Cat Brain ptr: " << copiedCat.getBrainAddr() << std::endl;
	// }
	Dog basic;
	{
		Dog tmp = basic;
	}
	return (0);
}

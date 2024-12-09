/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:19:26 by qtay              #+#    #+#             */
/*   Updated: 2024/12/07 17:11:52 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

/**
 * Upcasting is when you have a base class pointer or base class reference to
 * a derived class object: const Animal* i = new Cat();
 * The derived class object will be treated as if it were an object of the
 * base class.
 * 
 * Runtime polymorphism is demonstrated here
 */
int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* i = new Cat();
		const Animal* j = new Dog();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	{
		std::cout << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		const WrongCat* j = new WrongCat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	return (0);
}

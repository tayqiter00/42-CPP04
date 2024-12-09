/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:09:06 by qtay              #+#    #+#             */
/*   Updated: 2024/11/09 00:16:36 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/**
 * Not sure to use which method
 */
// Cat::Cat(void) : Animal("Cat"), _brain(nullptr)
// {
//     try {
//         _brain = new Brain();
//         std::cout << "Cat default constructor called\n";
//     } catch (const std::bad_alloc& e) {
//         std::cerr << "Memory allocation for _brain failed: " << e.what() << '\n';
//     }
// }
Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(std::string type) : Animal(type), _brain(new Brain())
{
	std::cout << "Cat parameterized constructor called\n";	
}

/**
 * Cat::Cat(const Cat& obj)
 * {
 *     *this = obj;
 * }
 * 
 * The method above calls the Animal default constructor. Then, it uses the
 * copy assignment operator (*this = obj) to deep copy the contents of obj to the
 * current object (new is used there). This requires it to re-initialize the Animal
 * part by copying the data from obj and then deep copying from the Brain object
 * from obj. Also, it might not be as safe especially if _brain isn't initialized
 * properly to nullptr (deleting a non-initialized ptr).
 * 
 * My method here calls the Animal copy constructor directly to initialize the
 * Animal portion of the Cat object. The copy constructor body
 * (this->_brain = new Brain(*obj._brain)) then creates a new Brain object 
 * and deep copies the data from obj._brain.
 */
Cat::Cat(const Cat &obj) : Animal(obj)
{
	this->_brain = new Brain(*obj._brain); // Deep copy
	std::cout << "Cat copy constructor called\n";
}

/**
 * A deep copy means creating a NEW copy of the dynamically allocated objects
 * that the pointers are referring to, rather than just copying the pointer
 * values that refer to the same object (shallow copy). 
*/
Cat	&Cat::operator=(Cat const &obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete this->_brain; // delete the old copy
		this->_brain = new Brain(*obj._brain); // Deep copy
		std::cout << "Cat copy assignment operator called\n";
	}
	return (*this);	
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat says: meow meow\n";	
}

Brain	*Cat::getBrainAddr(void) const
{
	return (this->_brain);
}

// std::string	Cat::getBrainVal(void) const
// {
// 	return (this->_brain->getBrainValue());
// }

// void	Cat::setBrainVal(std::string value) const
// {
// 	this->_brain->setBrainValue(value);
// }

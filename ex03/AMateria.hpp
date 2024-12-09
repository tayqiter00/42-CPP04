#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string const _type;

	public:
		AMateria(void);
		AMateria(const AMateria &obj);
		AMateria	&operator=(const AMateria &obj);
		virtual ~AMateria(void);
		AMateria(std::string const &type);

		std::string const	&getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void	use(ICharacter &target);
};

#endif

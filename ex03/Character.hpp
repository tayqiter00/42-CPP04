#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

#ifndef MAX_SLOTS
# define MAX_SLOTS 4
#endif

class AMateria;

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[MAX_SLOTS];

	public:
		Character(void);
		Character(std::string name);
		Character(const Character &obj);
		Character	&operator=(const Character &obj);

		~Character(void);
		std::string const	&getName(void) const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif

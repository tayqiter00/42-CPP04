#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class AMateria;

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &obj);
		Ice	&operator=(const Ice &obj);
		~Ice(void);
		Ice	*clone(void) const;
		void	use(ICharacter &target);

};

#endif

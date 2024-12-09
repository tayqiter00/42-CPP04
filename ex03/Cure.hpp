#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &obj);
		Cure	&operator=(const Cure &obj);
		~Cure(void);
		// Cure(std::string const &type);

		Cure	*clone(void) const;
		void	use(ICharacter &target);
};

#endif

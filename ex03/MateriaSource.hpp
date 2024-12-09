#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#include <iostream>

#ifndef MAX_SRC
# define MAX_SRC 4
#endif

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_srcs[MAX_SRC];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &obj);
		MateriaSource	&operator=(const MateriaSource &obj);
		~MateriaSource(void);

		void	learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif

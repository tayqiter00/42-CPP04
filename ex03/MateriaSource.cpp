#include "MateriaSource.hpp"
using std::cout;
using std::endl;

MateriaSource::MateriaSource(void)
{
	for (size_t i = 0; i < MAX_SRC; i++)
	{
		_srcs[i] = NULL;
	}
	cout << "MateriaSource default constructor called" << endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	for (size_t i = 0; i < MAX_SRC; i++)
	{
		_srcs[i] = obj._srcs[i];
	}
	cout << "MateriaSource copy constructor called" << endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		for (size_t i = 0; i < MAX_SRC; i++)
		{
			_srcs[i] = obj._srcs[i];
		}
	};
	cout << "MateriaSource copy assignment operator called" << endl;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < MAX_SRC; i++)
	{
		if (_srcs[i])
			delete _srcs[i];
	}
	cout << "MateriaSource destructor called" << endl;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (size_t i = 0; i < MAX_SRC; i++)
	{
		if (_srcs[i] == NULL)
		{
			_srcs[i] = m;
			return ;
		}
	}
	cout << "Maximum materia learned!" << endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < MAX_SRC; i++)
	{
		if (_srcs[i] != NULL && _srcs[i]->getType() == type)
		{
			cout << "Created new materia " << _srcs[i]->getType() << endl;
			return (_srcs[i]->clone());
		}
	}
	cout << "Cannot create materia: unknown materia" << endl;
	return (NULL);
}

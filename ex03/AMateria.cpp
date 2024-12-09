#include "AMateria.hpp"
using std::cout;
using std::endl;

AMateria::AMateria(void) : _type("")
{
	cout << "AMateria default constructor called" << endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	cout << "AMateria paramterized constructor called" << endl;
}

AMateria::AMateria(const AMateria &obj) :  _type(obj._type)
{
	cout << "AMateria copy constructor called" << endl;
}

/**
 * When assigning a Materia to another, copying the type doesn't make sense
 */
AMateria	&AMateria::operator=(const AMateria &obj)
{
	(void)obj;
	cout << "AMateria copy assignment operator called" << endl;
	return (*this);
}

AMateria::~AMateria(void)
{
	cout << "AMateria destructor called" << endl;
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	cout << " AMateria used on " << target.getName() << endl;
}

#include "Ice.hpp"
using std::cout;
using std::endl;

Ice::Ice(void) : AMateria("ice")
{
	cout << "Ice default constructor called" << endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	cout << "Ice copy constructor called" << endl;
}

Ice	&Ice::operator=(const Ice &obj)
{
	if (this != &obj)
	{
		AMateria::operator=(obj);
	}
	cout << "Ice copy assignment operator called" << endl;
	return (*this);
}

Ice::~Ice(void)
{
	cout << "Ice destructor called" << endl;
}
Ice	*Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}

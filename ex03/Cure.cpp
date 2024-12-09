#include "Cure.hpp"
using std::cout;
using std::endl;

Cure::Cure(void) : AMateria("cure")
{
	cout << "Cure default constructor called" << endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	cout << "Cure copy constructor called" << endl;
}

Cure	&Cure::operator=(const Cure &obj)
{
	if (this != &obj)
	{
		AMateria::operator=(obj);
	}
	cout << "Cure copy assignment operator called" << endl;
	return (*this);
}

Cure::~Cure(void)
{
	cout << "Cure destructor called" << endl;
}

Cure	*Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	cout << "* heals " << target.getName() << "'s wounds *" << endl;
}

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

using std::cout;
using std::endl;

int main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria	*temp = new Cure();
	AMateria	*temp2;
	AMateria	*temp3;
	AMateria	*temp4;
	AMateria	*temp5;
	AMateria	*temp6;

	src->learnMateria(new Ice());
	temp2 = src->createMateria("cure"); // create unsaved materia
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(temp); // max 4 materia srcs

	ICharacter* me = new Character("me");
	temp2 = src->createMateria("ice"); // 3 lines
	temp3 = src->createMateria("cure");
	temp4 = src->createMateria("ice");
	temp5 = src->createMateria("cure");
	temp6 = src->createMateria("unknown"); // create unknown materia
	(void)temp6;
	me->equip(temp);
	me->equip(temp2);
	me->equip(temp3);
	me->equip(temp4);
	me->equip(temp5); // max 4 inventory
	me->unequip(3);
	me->unequip(3); // unequip unexisting Materia
	cout << endl;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob); // Print correct
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob); // use unexisting Materia

	bob->equip(temp4);
	bob->equip(temp5);
	bob->unequip(4); // unequip unexisting Materia

	Character	charlie("charlie"); // deep copy tests
	charlie.equip(new Ice());
	{
		Character	david = charlie;
	}
	Character	david("david");
	{
		david = charlie;
	}

	MateriaSource	m1; // deep copy tests
	m1.learnMateria(new Cure()); 
	{
		MateriaSource	m2 = m1;
	}
	MateriaSource	m2;
	{
		m2 = m1;
	}
	delete bob;
	delete me;
	delete src;
	return 0;
}
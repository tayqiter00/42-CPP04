#include "Character.hpp"
using std::cout;
using std::endl;

Character::Character(void) :_name("random")
{
	for (size_t i = 0; i < MAX_SLOTS; i++)
		_inventory[i] = NULL;
	cout << "Character default constructor called" << endl;
}

Character::Character(std::string name) :_name(name)
{
	for (size_t i = 0; i < MAX_SLOTS; i++)
		_inventory[i] = NULL;
	cout << "Character parameterized constructor called" << endl;
}

/**
 * Using clone() ensures a deep copy is created for each AMateria-derived obj
 */
Character::Character(const Character &obj) : _name(obj._name)
{
	for (size_t i = 0; i < MAX_SLOTS; i++)
	{
		if (obj._inventory[i])
			_inventory[i] = obj._inventory[i]->clone();
		_inventory[i] = NULL;
	}
	cout << "Character copy constructor called" << endl;
}

/**
 * Old is deleted before creating a deep copy.
 */
Character	&Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		_name = obj._name;
		for (size_t i = 0; i < MAX_SLOTS; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = NULL;
		}
		for (size_t i = 0; i < MAX_SLOTS; i++)
		{
			if (obj._inventory[i])
				_inventory[i] = obj._inventory[i]->clone();
		}
		
	}
	cout << "Character copy assignment operator called" << endl;
	return (*this);
}

Character::~Character(void)
{
	for (size_t i = 0; i < MAX_SLOTS; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	cout << "Character destructor called" << endl;
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (size_t i = 0; i < MAX_SLOTS; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			cout << this->getName() << " equipped " << m->getType() << endl;
			return ;
		}
	}
	cout << this->getName() << "'s inventory is full!" << endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && _inventory[idx])
	{
		cout << this->getName() << " unequipped " << _inventory[idx]->getType() << endl;
		_inventory[idx] = NULL;
	}
	else
		cout << "[Unequip] Invalid inventory index" << endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && _inventory[idx])
	{
		_inventory[idx]->use(target);
	}
	else
		cout << "[Use] Invalid inventory index" << endl;
}

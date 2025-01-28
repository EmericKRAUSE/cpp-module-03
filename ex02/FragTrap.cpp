#include "FragTrap.hpp"

// ####################
// Constructors & Destructors
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap " << getName() << "'s Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{ std::cout << "FragTrap Copy constructor called" << std::endl; }

FragTrap::~FragTrap()
{ std::cout << "FragTrap " << getName() << "'s Destructor called" << std::endl; }
// ####################

// ####################
// Operator Overload
FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	if (this != &obj)
	{
		setName(obj.getName());
		setHitPoints(obj.getHitPoints());
		setEnergyPoints(obj.getEnergyPoints());
		setAttackDamage(obj.getAttackDamage());
	}
	return (*this);
}
// ####################

// ####################
// Methodes
void FragTrap::highFivesGuys(void)
{ std::cout << "FragTrap " << getName() << " is doing a high five!" << std::endl; }
// ####################

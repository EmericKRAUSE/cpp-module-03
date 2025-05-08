#include "ClapTrap.hpp"

// ####################
// Constructors & Destructors
ClapTrap::ClapTrap()
	:	_name("Default"),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0)
{ std::cout << "Default Constructor called" << std::endl; }

ClapTrap::ClapTrap(const std::string& name)
	:	_name(name),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0)
{ std::cout << getName() << "'s Constructor called" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj; 
}

ClapTrap::~ClapTrap()
{ std::cout << getName() << "'s Destructor called" << std::endl; }
// ####################

// ####################
// Operator Overload
ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
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
// Getters & Setters
std::string ClapTrap::getName() const
{ return (this->_name); }

unsigned int ClapTrap::getHitPoints() const
{ return (this->_hitPoints); }

unsigned int ClapTrap::getEnergyPoints() const
{ return (this->_energyPoints); }

unsigned int ClapTrap::getAttackDamage() const
{ return (this->_attackDamage); }

void ClapTrap::setName(const std::string& name)
{ this->_name = name; }

void ClapTrap::setHitPoints(const unsigned int &hitPoints)
{
	this->_hitPoints = hitPoints;
	std::cout << getName() << "'s hit points is now: " << getHitPoints() << std::endl;
}

void ClapTrap::setEnergyPoints(const unsigned int &energyPoints)
{
	this->_energyPoints = energyPoints;
	std::cout << getName() << "'s energy points is now: " << getEnergyPoints() << std::endl;
}

void ClapTrap::setAttackDamage(const unsigned int& attackDamage)
{
	this->_attackDamage = attackDamage;
	std::cout << getName() << "'s attack damage is now: " << getAttackDamage() << std::endl;
}
// ####################

// ####################
// Methodes
void ClapTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout	<< "ClapTrap "
					<< getName()
					<< " attacks "
					<< target
					<< ", causing "
					<< getAttackDamage()
					<< " points of damage!"
					<< std::endl;

		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << getName() << " cannot attack..." << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() > 0)
	{
		if (amount > getHitPoints())
			amount = getHitPoints();
		std::cout	<< "ClapTrap "
					<< getName()
					<< " takes "
					<< amount
					<< " points of damage!"
					<< std::endl;
		setHitPoints(getHitPoints() - amount);
	}
	else
		std::cout << getName() << " cannot take anymore damage..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout	<< "ClapTrap "
					<< getName()
					<< " repairs himself for "
					<< amount
					<< " hit points"
					<< std::endl;

		setEnergyPoints(getEnergyPoints() - 1);
		setHitPoints(getHitPoints() + amount);
	}
	else
		std::cout << getName() << " cannot be repaired..." << std::endl;
}
// ####################

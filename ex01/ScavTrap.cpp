#include "ScavTrap.hpp"

// ####################
// Constructors & Destructors
ScavTrap::ScavTrap() : ClapTrap(), _gateKeeperMode(false)
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name), _gateKeeperMode(false)
{
	std::cout << "ScavTrap " << getName() << "'s Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap()
{ std::cout << "ScavTrap " << getName() << "'s Destructor called" << std::endl; }
// ####################

// ####################
// Operator Overload
ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	if (this != &obj)
	{
		setName(obj.getName());
		setHitPoints(obj.getHitPoints());
		setEnergyPoints(obj.getEnergyPoints());
		setAttackDamage(obj.getAttackDamage());
		setGateKeeperMode(obj.getGateKeeperMode());
	}
	return (*this);
}
// ####################

// ####################
// Getters & Setters
bool ScavTrap::getGateKeeperMode() const
{ return (this->_gateKeeperMode); }

void ScavTrap::setGateKeeperMode(const bool& mode)
{ this->_gateKeeperMode = mode; }
// ####################

// ####################
// Methodes
void ScavTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "ScavTrap "
				  << getName()
				  << " attacks "
				  << target
				  << ", causing "
				  << getAttackDamage()
				  << " points of damage!"
				  << std::endl;
	}
	else
		std::cout << "ScavTrap " << getName() << " cannot attack..." << std::endl;
}

void ScavTrap::guardGate()
{
	if (getGateKeeperMode())
		std::cout << "ScavTrap " << getName() << " is already in gate keeper mode..." << std::endl;
	else
	{
		std::cout << "ScavTrap " << getName() << " is now in gate keeper mode!" << std::endl;
		setGateKeeperMode(true);
	}
}
// ####################

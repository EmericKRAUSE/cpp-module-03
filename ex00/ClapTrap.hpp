#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
		// ####################
		// Constructors & Destructors
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap();

		// ####################
		// Operator Overload
		ClapTrap& operator=(const ClapTrap& obj);

		// ####################
		// Getters & Setters
		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;
		void			setName(const std::string& name);
		void			setHitPoints(const unsigned int& hitPoints);
		void			setEnergyPoints(const unsigned int& energyPoints);
		void			setAttackDamage(const unsigned int& attackDamage);

		// ####################
		// Methodes
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif

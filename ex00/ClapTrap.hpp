#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

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
		std::string getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		void		setName(const std::string& name);
		void		setHitPoints(const int& hitPoints);
		void		setEnergyPoints(const int& energyPoints);
		void		setAttackDamage(const int& attackDamage);

		// ####################
		// Methodes
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif

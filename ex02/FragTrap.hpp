#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool	_gateKeeperMode;
	public:
		// ####################
		// Constructors & Destructors
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& obj);
		virtual ~ScavTrap();

		// ####################
		// Operator Overload
		ScavTrap& operator=(const ScavTrap& obj);

		// ####################
		// Getters & Setters
		bool	getGateKeeperMode() const;
		void	setGateKeeperMode(const bool& mode);

		// ####################
		// Methodes
		void attack(const std::string& target);
		void guardGate();
		
};

#endif

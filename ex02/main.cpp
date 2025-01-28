#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap *a = new ScavTrap();

	delete a;

	// scav.setEnergyPoints(0);
	// scav.attack("bob");
	// scav.guardGate();
	// scav.guardGate();
}

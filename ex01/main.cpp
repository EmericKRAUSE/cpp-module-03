#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// ClapTrap *a = new ScavTrap(); // To demonstrate why using virtual Destructor
	// delete a;

	ScavTrap scav("scav");

	scav.setEnergyPoints(0);
	scav.attack("bob");
	scav.guardGate();
	scav.guardGate();
}

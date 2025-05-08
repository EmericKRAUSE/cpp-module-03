#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("scav");

	// --Atributes-- //
	std::cout << std::endl << "Atributes:" << std::endl;

	std::cout
		<< "Name: " << scav.getName() << std::endl
		<< "Hit points: " << scav.getHitPoints() << std::endl
		<< "Energy points: " << scav.getEnergyPoints() << std::endl
		<< "Attack damage: " << scav.getAttackDamage() << std::endl;

	//  --Attack & GuardGate-- //
	std::cout << std::endl << "Attack & GuardGate:" << std::endl;
	scav.attack("bob");
	scav.guardGate();

	//  --Attack & GuardGate without energy-- //
	std::cout << std::endl << "Attack & GuardGate without energy:" << std::endl;
	scav.setEnergyPoints(0);
	scav.attack("bob");
	scav.guardGate();
	scav.guardGate();

	std::cout << std::endl;
}

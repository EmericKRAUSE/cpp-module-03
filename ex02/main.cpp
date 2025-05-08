#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap frag("frag");

	// --Atributes-- //
	std::cout << std::endl << "Atributes:" << std::endl;

	std::cout
		<< "Name: " << frag.getName() << std::endl
		<< "Hit points: " << frag.getHitPoints() << std::endl
		<< "Energy points: " << frag.getEnergyPoints() << std::endl
		<< "Attack damage: " << frag.getAttackDamage() << std::endl;

	// --Atributes-- //
	std::cout << std::endl << "Tests:" << std::endl;

	frag.highFivesGuys();
	frag.setHitPoints(20);
	std::cout << frag.getHitPoints() << std::endl;

	std::cout << std::endl;
	return (0);
}

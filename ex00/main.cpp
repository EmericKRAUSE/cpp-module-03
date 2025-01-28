#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");
	ClapTrap alex("Alex");

	bob.attack("Alex");
	alex.takeDamage(bob.getAttackDamage());

	bob.setAttackDamage(5);
	bob.attack("Alex");
	alex.takeDamage(bob.getAttackDamage());

	alex.beRepaired(5);
	bob.setAttackDamage(11);
	bob.attack("Alex");
	alex.takeDamage(bob.getAttackDamage());

	alex.beRepaired(10);
	alex.attack("Bob");
	alex.takeDamage(5);
}

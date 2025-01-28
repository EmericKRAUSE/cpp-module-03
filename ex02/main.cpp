#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap frag("frag");
	
	frag.highFivesGuys();
	std::cout << frag.getHitPoints() << std::endl;
	frag.setHitPoints(20);
	std::cout << frag.getHitPoints() << std::endl;

	FragTrap frag2(frag);
	frag2.highFivesGuys();
	std::cout << frag.getHitPoints() << std::endl;

	return (0);
}

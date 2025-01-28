#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		// ####################
		// Constructors & Destructors
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &obj);
		virtual ~FragTrap();

		// ####################
		// Operator Overload
		FragTrap &operator=(const FragTrap &obj);

		// ####################
		// Methodes
		void highFivesGuys(void);
};

#endif

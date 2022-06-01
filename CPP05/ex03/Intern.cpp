#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other)
{
	(void) other;
}

Intern::~Intern() {}

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *form = NULL;
	int i = 0;

	std::string	forms[3] = {"Shrubbery creation", "Robotomy request", "Presidential pardon"};
	while (i < 3 && forms[i] != name)
		i++;
	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form =  new PresidentialPardonForm(target);
			break;
		default:
			throw FormIsNotCreatedException();
	}
	std::cout << "Intern creates " << *form << std::endl;
	return form;
}
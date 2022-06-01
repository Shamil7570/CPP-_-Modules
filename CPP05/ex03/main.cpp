#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Intern	someRandomIntern;
	Form*	rrf = NULL;
	Bureaucrat bob("bob", 4);

	try
	{
		rrf = someRandomIntern.makeForm("Presidential pardon", "target");
		std::cout << *rrf << std::endl << std::endl;
		bob.signForm(*rrf);
		rrf->execute(bob);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
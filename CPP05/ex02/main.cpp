#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	{
	std::cout << "ShrubberyCreationForm"<<std::endl;
	Bureaucrat	bim = Bureaucrat("Bim", 16);
	std::cout << bim << std::endl;
	Bureaucrat	bob = Bureaucrat("Bob", 100);
	std::cout << bob << std::endl;
	ShrubberyCreationForm shru_form("SHRU-FORM");
	std::cout << shru_form << std::endl;
	std::cout << "Bob tries to execute form." << std::endl;
	bob.executeForm(shru_form);
	std::cout << "Bim tries to sign form." << std::endl;
	bim.signForm(shru_form);
	std::cout << "Bob tries to execute form." << std::endl;
	bob.executeForm(shru_form);
	std::cout << "Bim tries to execute form." << std::endl;
	bim.executeForm(shru_form);
	}
	std::cout << "__________________________________\n" << std::endl;
	{
	std::cout << "PresidentialPardonForm" << std::endl;
	Bureaucrat	bim = Bureaucrat("Bim", 20);
	std::cout << bim << std::endl;
	Bureaucrat	bob = Bureaucrat("Bob", 3);
	std::cout << bob << std::endl;
	PresidentialPardonForm form2 = PresidentialPardonForm("Presidential-form");
	std::cout << form2 << std::endl;
	std::cout << "Bob tries to execute form." << std::endl;
	bob.executeForm(form2);
	std::cout << "Bim tries to sign form." << std::endl;
	bim.signForm(form2);
	std::cout << "Bob tries to execute form." << std::endl;
	bob.executeForm(form2);
	std::cout << "Bim tries to execute form." << std::endl;
	bim.executeForm(form2);
	}
	std::cout << "__________________________________\n" << std::endl;
	{
	std::cout << "RobotomyRequestForm" << std::endl;
	Bureaucrat	bim = Bureaucrat("Bim", 60);
	std::cout << bim << std::endl;
	Bureaucrat	bob = Bureaucrat("Bob", 40);
	std::cout << bob << std::endl;
	RobotomyRequestForm robot_form = RobotomyRequestForm("ROBOT-FORM");
	std::cout << robot_form << std::endl;
	std::cout << "Bob tries to execute form." << std::endl;
	bob.executeForm(robot_form);
	std::cout << "Bim tries to sign form." << std::endl;
	bim.signForm(robot_form);
	std::cout << "Bob tries to execute form." << std::endl;
	bob.executeForm(robot_form);
	std::cout << "Bim tries to execute form." << std::endl;
	bim.executeForm(robot_form);
	}
	return 0;
}
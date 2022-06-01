#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &other);
	~Intern();

	Intern &operator =(const Intern &other);

	Form *makeForm(std::string name, std::string target);
};

class FormIsNotCreatedException:public std::exception
{
public:
	virtual const char * what() const throw(){
		return ("Intern couldn't create form");
	}
};

#endif


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other), _target(other._target)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator =(const PresidentialPardonForm& other)
{
	Form::operator=(other);
	this->_target = other._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!this->getIsSigned() )
			throw FormIsNotSignedException();
		else if ( this->getGradeExecute() < executor.getGrade() )
			throw GradeTooLowException();
		else
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
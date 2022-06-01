#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target): Form(_target, 72, 45)
{
	this->_target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other)
{
	this->_target = other._target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator =(const RobotomyRequestForm & other)
{
	Form::operator=(other);
	this->_target = other._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!this->getIsSigned())
			throw FormIsNotSignedException();
		else if ( this->getGradeExecute() < executor.getGrade() )
			throw GradeTooLowException();
		else
		{
			std::cout << "DRRRRRRRRRRRRRRR!!!" << std::endl;
			std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
		}
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

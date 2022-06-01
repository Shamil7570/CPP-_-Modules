#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string _target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	RobotomyRequestForm &operator =(const RobotomyRequestForm& other);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};

#endif
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string _target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm &operator =(const PresidentialPardonForm &other);
	~PresidentialPardonForm();

	void execute( Bureaucrat const & executor ) const;
};

#endif

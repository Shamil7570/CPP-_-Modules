#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator =( ShrubberyCreationForm const & other);
	void execute(Bureaucrat const & executor) const;
};

std::ostream & operator <<(std::ostream &o, Form const &other);


#endif
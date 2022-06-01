#ifndef FORM_HPP
 #define FORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class Form
{
private:
    const std::string name;
	bool is_signed;
	const int gradeSign;
	const int gradeExecute;
    Form();
public:
    Form(const std::string name, const int gradeSign, const int gradeExecute);
    Form(const Form& obj);
    Form &operator=(const Form& obj);
    virtual ~Form();

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    void beSigned(Bureaucrat& bur);
    virtual void execute(Bureaucrat const& bur) const = 0;

    class GradeTooHighException : public std::exception{
        public:
            virtual const char *what(void) const throw(){
                return ("Grade is too high. Highest grade is 1");
            }
    };

    class GradeTooLowException : public std::exception{
        public:
            virtual const char *what(void) const throw(){
                return ("Grade is too low. Lowest grade is 150");
            }
    };

    class FormIsNotSignedException : public std::exception{
        public:
            virtual const char *what(void) const throw(){
                return ("Form is not signed!!!");
            }
    };
};

std::ostream & operator <<(std::ostream &ost, Form const & obj);

#endif

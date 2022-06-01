#ifndef FORM_HPP
 #define FORM_HPP

#include "Bureaucrat.hpp"

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
    ~Form();

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeSign() const;
    void beSigned(Bureaucrat& bur);
    int getGradeExecute() const;

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
};

std::ostream & operator <<(std::ostream &ost, Form const & obj);

#endif

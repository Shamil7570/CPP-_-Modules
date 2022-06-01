#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
private:
    const std::string name;
    int grade;
    void	checkGrade(int grade) const;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat &operator=(const Bureaucrat& obj);
    ~Bureaucrat();

    std::string getName(void) const;
    int getGrade(void) const;
    void	incrementGrade(void);
	void	decrementGrade(void);

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

std::ostream &operator<<(std::ostream &ost, Bureaucrat const &obj);


#endif
